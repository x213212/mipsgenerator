
%{

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
extern int yylineno;
extern char* yytext;
extern int yylex();

void yyerror(char *s);

enum REG_SEQ{v=0,t=1,a=2};
int get_reg(enum REG_SEQ reg_seq,int flag);
static int reg_amount[3]={-1,-1,-1};

int bool_num=0;
int bool_b=0;

int True_label[32]={0};
int False_label[32]={0};

int TF_label[2][32]={0};
int bool_while = 0;
int P_TF=0;
int P_IF[32]={-1};
int P_FOR[32]={-1};
int P_WHILE[32]={-1};
int IF_count=-1;
int FOR_count=-1;
int WHILE_count=-1;
int label_cur=0;
int label_num=0;
int get_label(int flag);
int test = 0;
int F_Q=0;

void start_if(int num);


%}

%locations

%token <str> Identifier

%token <value> IntegerC

%token Else
%token Exit
%token Int
%token If
%token Read
%token While
%token Write

%token Plus
%token Minu
%token Aste
%token Slas
%token Perc
%token Dequ
%token Nequ
%token Grea
%token Greq
%token Less
%token Leeq 
%token Ampe
%token Dver
%token Excl
%token Equa
%token Semi
%token Comm
%token Opar
%token Cpar
%token Obra
%token Cbra

%start program


%union yylval{
	char* str;
	int value;
}
%%

program : Identifier Opar Cpar function_body 
		{/*printf("program -> Identifier () function_body\n");*/};
		
function_body : Obra {printf("\t.data\n");}  variable_declarations {printf("\t.text\n"); printf("main:\n");}  statements Cbra
		{/*printf("function_body -> { variable_declarations statements }\n");*/};
		
variable_declarations : {/*printf("variable_declarations -> empty\n");*/}
	| variable_declarations variable_declaration
	{/*printf("variable_declarations -> variable_declarations variable_declaration\n");*/};

variable_declaration: Int Identifier  { printf("%s:\t.word\t",$2); } Semi 
			{/*printf("variable_declaration -> int Identifier ;\n" ); */printf("0\n"); };

statements : {/*rintf("statements -> empty\n");*/}
	| statements statement
	{/*printf("statements -> statements statement\n");*/};

statement : assignment_statement
		{/*printf("statement -> assignment_statement\n");*/}
	| compound_statement
	{/*printf("statement -> compound_statement\n");*/}
	| if_statement
	{	IF_count--;
			label_cur=label_num;
			P_TF++;}
	| while_statement 
	{/*printf("statement -> while_statement\n");*/}
	| exit_statement
	{/*printf("statement -> exit_statement\n");*/}
	| read_statement 
	{/*printf("statement -> read_statement \n");*/}
	| write_statement
	{/*printf("statement -> write_statement\n");*/}
	{}
	;


assignment_statement : Identifier {printf("\tla\t$t%d, %s\n",get_reg(t,1), $1); printf("test\n");} Equa arith_expression Semi 
			{	
			printf("\tsw\t$t%d, 0($t%d)\n",get_reg(t,0),get_reg(t,0)-1);
			get_reg(t,-1);
			get_reg(t,-1);};

compound_statement : Obra statements Cbra
			{/*printf("compound_statement -> { statements }\n");*/};

if_statement : 
	 If Opar bool_expression Cpar statement{	
			label_cur=TF_label[0][P_IF[IF_count]];
			TF_label[F_Q%2][label_cur]=get_label(1);
			printf("\tb\tL%d\n",TF_label[F_Q%2][label_cur]);
			printf("L%d:\t# else\n",TF_label[1][P_IF[IF_count]]);
			P_TF++;} Else statement
	{	//printf("L%d:\t# endif\n",TF_label[F_Q%2][label_cur]);
	}|
	If Opar bool_expression Cpar statement
		{	label_cur=P_IF[IF_count];
			printf("L%d:\t# endif\n",TF_label[(F_Q+1)%2][label_cur]);
			}
	;
//WHILE(){int n;n = 1; if(n >10 ){n=2;} else {n = 2; while(n > 0){write 1;}} if(n >10 ){n=2;} }
//WHILE(){int n;n = 1; if(n >10 ){n=2;} else {n = 2;  if(n <10){while(n > 0){write 1;}}}}
////WHILE(){int n; n = 1; while(n > 0 && n > 4 || n <20 ){write 1; if(n >10 ){n=2;} else {n = 2; } }write 2;if(n >10 ){n=2;}}
////WHILE(){int n; n = 1; while(n > 
while_statement : While { printf("#while\n");
			//label_cur=get_label(0);
			bool_while =1;
			printf("L%d:\t# endif2\n",get_label(1));
			WHILE_count++; 
			P_WHILE[WHILE_count]=label_num;
			
			//printf("\tL%d\n",P_WHILE[WHILE_count]);
			//printf("\tWHILE_COUNT%d\n",WHILE_count);
			//TF_label[F_Q%2][label_cur]=get_label(1);
			
			//printf("\tb\tL%d\n",TF_label[F_Q%2][label_cur]);
			//printf("L%d:\t# else\n",TF_label[1][P_IF[WHILE_count]]);
			//P_TF++			
			} Opar bool_expression Cpar statement
			{ 
			//label_cur=TF_label[0][P_IF[WHILE_count]];
			
			//printf("\tb\tL%d\n",P_WHILE[WHILE_count]);
			//printf("\tfffffffffffff%d\n",label_cur);
			//if(WHILE_count > 0 )
			//if(bool_while == 1 )
								//printf("\t2L%d\n",P_WHILE[WHILE_count]);
								//printf("\t2WHILE_COUNT%d\n",WHILE_count);
					printf("\tb\tL%d\n",P_WHILE[WHILE_count]);
					//get_label(1);
				//printf("wwwwwwwwwww%d\n",label_num);
				if(P_WHILE[WHILE_count] -1 == 0 )
					printf("L%d:\t\n",label_num);
					else{
					printf("L%d:\t\n",label_num);
				printf("L%d:\t\n",P_WHILE[WHILE_count] -1);
				}
			
			//printf("L%d:\t# else\n",TF_label[0][P_IF[IF_count]]);
			//printf("L%d:\t# else\n",TF_label[0][P_IF[IF_count]]);
			WHILE_count--;
								bool_while=0;
			//P_TF++;
			/*printf("while_statement -> while ( bool_expression ) statement\n");*/};

exit_statement : Exit Semi
		{	printf("\tli\t$v%d, 10\n",get_reg(v,1));
			printf("\tsyscall\n");
			get_reg(v,-1);};
			
read_statement : Read Identifier Semi
		{	printf("\tli\t$v%d, 5\n",get_reg(v,1));
			printf("\tsyscall\n");
			printf("\tla\t$t%d, %s\n",get_reg(t,1),$2);
			printf("\tsw\t$v%d, 0($t%d)\n",get_reg(t,0),get_reg(t,0));
			get_reg(v,-1);
			get_reg(t,-1);};

write_statement : Write arith_expression Semi
		{	printf("\tmove\t$a%d, $t%d\n",get_reg(a,1),get_reg(t,0));
			printf("\tli\t$v%d, 1\n",get_reg(v,1));
			printf("\tsyscall\n");
			get_reg(a,-1);
			get_reg(t,-1);
			get_reg(v,-1);};
//Boolean1(){if(3 > 2 || 3 <= 2 && 7 <= 2){write 1;}}	
//Boolean1(){if(3 > 2 || 3 <= 2 && 7 <= 2){write 1;}sum()

bool_expression : bool_expression2
		{	if(bool_b==1){
					printf(", L%d\n",TF_label[F_Q%2][P_IF[IF_count]]);
					if(bool_while == 1 )
					if(P_WHILE[WHILE_count] -1 == 0 )
					//printf("L%d:\t\n",label_num);
					printf("\tb\tL%d\n",label_num);
					else
		
				printf("\tb\tL%d\n",P_WHILE[WHILE_count]-1);
					
					else
					printf("\tb\tL%d\n",TF_label[(F_Q+1)%2][P_IF[IF_count]]);

					//printf("\t1fffffffffffff%d\n",label_cur);
					bool_b--;
					F_Q=0;
				}
				printf("L%d:\t# then\n",TF_label[0][P_IF[IF_count]]);
				
				P_TF++;
				bool_num=0;}		
			;
bool_expression2 : bool_term
			{/*printf("bool_expression -> bool_term\n");*/}
	| bool_expression2 {	if(bool_b==1){
				get_label(1);
				
				//printf(", L%d\n",TF_label[F_Q%2][label_cur]);
				label_cur=label_num;
				TF_label[F_Q%2][label_cur]=TF_label[0][P_IF[IF_count]];
				TF_label[(F_Q+1)%2][label_cur]=label_cur;
				P_TF++;
				printf(", L%d\n",TF_label[F_Q%2][label_cur]);		
				if(bool_while == 1 )
					if(P_WHILE[WHILE_count] -1 == 0 )
					//printf("L%d:\t\n",label_num);
					printf("\tb\tL%d\n",label_num);
					else
		
				printf("\tb\tL%d\n",P_WHILE[WHILE_count]-1);
					else
			printf("\tb\tL%d\n",TF_label[(F_Q+1)%2][label_cur]);
					
			
				printf("L%d:",TF_label[(F_Q+1)%2][label_cur]);
				
				//printf("\t2fffffffffffff%d\n",label_cur);
				bool_b--;
				F_Q=0;}
		}
		Dver bool_term
	{/*printf("bool_expression -> bool_expression || bool_term\n");*/};

bool_term : bool_factor
		{/*printf("bool_term -> bool_factor\n");*/}
	| bool_term {	if(bool_b==1){
				get_label(1);
				
				label_cur=label_num;
				TF_label[F_Q%2][label_cur]=label_cur;
				TF_label[(F_Q+1)%2][label_cur]=TF_label[1][P_IF[IF_count]];
				P_TF++;
				
				printf(", L%d\n",TF_label[F_Q%2][label_cur]);
				if(bool_while == 1 )
					if(P_WHILE[WHILE_count] -1 == 0 )
					//printf("L%d:\t\n",label_num);
					printf("\tb\tL%d\n",label_num);
					else
		
				printf("\tb\tL%d\n",P_WHILE[WHILE_count]-1);
					else
				printf("\tb\tL%d\n",TF_label[(F_Q+1)%2][label_cur]);
				
				
				printf("L%d:",TF_label[F_Q%2][label_cur]);
				//printf("\t3fffffffffffff%d\n",label_cur);
				bool_b--;
				F_Q=0;}
		}
		Ampe bool_factor
	//{/*printf("bool_term -> bool_term && boprocedure FOR is
	;
bool_factor : bool_primary
		{ /*printf("bool_factor -> bool_primary\n");*/}
	| Excl {/*printf("bool_factor -> ! bool_primary\n");*/F_Q++;} bool_primary
	;

bool_primary : arith_expression Dequ arith_expression
			{	start_if(0);}
	| arith_expression Nequ arith_expression
	{	start_if(1);}
	| arith_expression Grea arith_expression
	{	start_if(2);}
	| arith_expression Greq arith_expression
	{	start_if(3);}
	| arith_expression Less arith_expression
	{	start_if(4);}
	| arith_expression Leeq arith_expression
	{	start_if(5);}
	;
arith_expression : arith_term
		{/*printf("arith_expression -> arith_term\n");*/}
	| arith_expression Plus arith_term
	{	printf("\tadd\t$t%d, $t%d, $t%d\n",get_reg(t,0)-1,get_reg(t,0)-1,get_reg(t,0));
			get_reg(t,-1);}
	| arith_expression Minu arith_term
	{	printf("\tsub\t$t%d, $t%d, $t%d\n",get_reg(t,0)-1,get_reg(t,0)-1,get_reg(t,0));
			get_reg(t,-1);};
	
arith_term : arith_factor
		{ /*printf("arith_term -> arith_factor\n");*/}
	| arith_term Aste arith_factor
		{	printf("\tmul\t$t%d, $t%d, $t%d\n",get_reg(t,0)-1,get_reg(t,0)-1,get_reg(t,0));
			get_reg(t,-1);}
	| arith_term Slas arith_factor
		{	printf("\tdiv\t$t%d, $t%d, $t%d\n",get_reg(t,0)-1 ,get_reg(t,0)-1,get_reg(t,0));
			//printf("\tmflo\t$t%d\n",get_reg(t,0)-1);
			get_reg(t,-1);}
	| arith_term Perc arith_factor
		{	printf("\trem\t$t%d, $t%d, $t%d\n",get_reg(t,0)-1 ,get_reg(t,0)-1,get_reg(t,0));
			//printf("\tmfli\t$t%d\n",get_reg(t,0)-1);
			get_reg(t,-1);};
	
arith_factor : arith_primary
	{/*printf("arith_factor -> arith_primary\n");*/}
	| Minu arith_primary
	{	printf("\tneg\t$t%d, $t%d\n",get_reg(t,0),get_reg(t,0));}
	;
arith_primary : IntegerC
	{printf("\tli\t$t%d, %d\n",get_reg(t,1),$1);}	
	| Identifier
	{	
	printf("\tla\t$t%d, %s\n",get_reg(t,1),$1);
			printf("\tlw\t$t%d, 0($t%d)\n",get_reg(t,0),get_reg(t,0));}
	| Opar arith_expression Cpar
	{ /*printf("arith_primary -> ( arith_expression )\n");*/};


%%

//Additional C code

/*----------get_reg----------*/
/*
 *  Manage Register Amount
 *	Type: v(value)/t(temp)/a(arg)
 *	Flag: 1(increase)/0(get current)/-1(decrease)
 */
/*---------------------------*/

int get_reg(enum REG_SEQ reg_seq,int flag){
	
	//char* reg_string=malloc(10 * sizeof(char));
	char type[3]={'v','t','a'};
	
	if(flag == 1){
		reg_amount[reg_seq]++;
	}else if(flag == -1){
		if(reg_amount[reg_seq]==-1){
			printf("Error: $%c%d is not used\n",type[reg_seq],reg_amount[reg_seq]);
		}else{
			reg_amount[reg_seq]--;}
	}else if(flag == 0){	/*do nothing*/
	}else{
		printf("Error: get_reg(): Flag value error\n");
	}
	
	//sprintf(reg_string,"$%c%d",type[reg_seq],reg_amount[reg_seq]);
	return reg_amount[reg_seq];
}

/*----------get_label----------*/
/*
 * Manage Label Amount
 */
/*-----------------------------*/

int get_label(int flag){
	if(flag==1){
		return ++label_num;
	}else if(flag==0){
		if(label_cur<label_num){
			return ++label_cur;
		}else{
			printf("Error: get_label(): Current label is out of order\n");
		}
	}else{
		printf("Error: get_label(): Flag value error\n");
	}
	return label_cur;
}

/*----------start_if----------*/

void start_if(int num){
	char *branch[6]={"beq","bne","bgt","bge","blt","ble"};
	bool_num++;
	bool_b++;
	if(bool_num==1){
		IF_count++;
		TF_label[0][P_TF]=get_label(1);
		TF_label[1][P_TF]=get_label(1);
		P_IF[IF_count]=P_TF;
		P_TF++;
	}
	printf("\t%s\t$t%d, $t%d",branch[num], get_reg(t,0)-1, get_reg(t,0));
	get_reg(t,-1);
	get_reg(t,-1);
}

/*------------------------------------------*/
void yyerror(char *s){
	fprintf(stderr,"Syntax error: line: %d\n",yylineno);
}

int main(void){
	yyparse();
	return 0;
}
