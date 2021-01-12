%option yylineno
%{
#include <stdio.h>

#include "Lotus.tab.h"

int Numberline = 1 ;
int tmp = 0 ;

void error(char* mes , int numline);
char* proidenti(char* cr);
int prointcons(char* cr);

%}

Identifier 	[a-zA-Z][a-zA-Z0-9]*

IntegerC	 [0-9]+

Blank 	[ ]
Tab	[\t]
Newline [\n]
Ws	({Blank}|{Tab})+

Comment "//"[^\n]+

%%

{Newline}	{Numberline ++ ;}
{Ws}		{ /* not return */}
{Comment} 	{ /* not return */}

"else"   {return Else ;}
"exit"   {return Exit ;}
"int"    {return Int  ;}
"if"     {return If   ;}
"read"   {return Read ;}
"while"  {return While;}
"write"  {return Write;}


{Identifier} 	{yylval.str=proidenti(yytext);
		 sscanf(yytext,"%s",yylval.str);
		 return Identifier; }

{IntegerC} 	{yylval.value=prointcons(yytext);
		 sscanf(yytext,"%d",&yylval.value);
		 return IntegerC; }


"+"     {return Plus;}
"-"     {return Minu;}
"*"     {return Aste;}
"/"     {return Slas;}
"%"     {return Perc;}
"=="    {return Dequ;}
"!="    {return Nequ;}
">"     {return Grea;}
">="    {return Greq;}
"<"     {return Less;}
"<="    {return Leeq;}
"&&"    {return Ampe;}
"||"    {return Dver;}
"!"     {return Excl;}
"="     {return Equa;}
";"     {return Semi;}
","     {return Comm;}
"("     {return Opar;}
")"     {return Cpar;}
"{"     {return Obra;}
"}"     {return Cbra;}

. 	 { error(yytext , Numberline); }

%%

int yywrap()
{
	return(1);
}

char* proidenti(char* cr){
	return cr;
}

int prointcons(char* cr){
	int temp = atoi(cr);
	return temp;
}

void error(char* msg, int line) {
    printf("Lexical error: line %d: unknown character %c\n",line,*msg);
}

