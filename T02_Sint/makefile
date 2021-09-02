flex:
	flex -o Flex/lex.yy.c Flex/C_IPL_Lex-Analyzer.l

bison:
	bison -d -o Bison/C_IPL_Syntax.tab.c Bison/C_IPL_Syntax.y -Wcounterexamples

compile:
	gcc -o tradutor Bison/C_IPL_Syntax.tab.c Flex/lex.yy.c lib/*.c -g -Wall

run:
	./tradutor tests/test.c

all:
	make flex bison compile run

clean:
	rm -f Bison/C_IPL_Syntax.tab.c Bison/C_IPL_Syntax.tab.h Flex/lex.yy.c tradutor