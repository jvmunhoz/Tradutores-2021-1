flex:
	flex -o src/lex.yy.c src/C_IPL_Lex-Analyzer.l

bison:
	bison -d -o src/C_IPL_Syntax.tab.c src/C_IPL_Syntax.y -Wcounterexamples

compile:
	gcc -o tradutor src/C_IPL_Syntax.tab.c src/lex.yy.c lib/*.c -g -Wall -Wextra -Wpedantic

test:
	./tradutor tests/test.c

run:
	./tradutor tests/Ex_Correct_0.c

run_correct_1:
	./tradutor tests/Ex_Correct_1.c

run_correct_2:
	./tradutor tests/Ex_Correct_2.c

run_incorrect_1:
	./tradutor tests/Ex_Incorrect_1.c

run_incorrect_2:
	./tradutor tests/Ex_Incorrect_2.c

all:
	make flex bison compile

clean:
	rm -f src/C_IPL_Syntax.tab.c src/C_IPL_Syntax.tab.h src/lex.yy.c tradutor logfile.out

memleak:
	valgrind -v --tool=memcheck --leak-check=full --show-leak-kinds=all --track-origins=yes --log-file="logfile.out" ./tradutor tests/Ex_Correct_0.c