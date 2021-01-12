out: parser

parser: Lotus.tab.c Lotus.yy.c -lfl
	gcc lex.yy.c Lotus.tab.c -o parser

Lotus.yy.c: Lotus.l
	flex Lotus.l

Lotus.tab.h Lotus.tab.c: Lotus.y
	bison -d Lotus.y

clean:
	rm Lotus.tab.h Lotus.tab.c Lotus.yy.c parser
