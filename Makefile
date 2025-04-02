all: compiler

compiler: lex.yy.c syntax.tab.c symtab.c
	gcc lex.yy.c syntax.tab.c symtab.c -lfl -o compiler

lex.yy.c: lexical.l
	flex lexical.l

syntax.tab.c: syntax.y
	bison -t -d -v syntax.y

clean:
	rm -f lex.yy.c syntax.tab.c syntax.tab.h compiler
