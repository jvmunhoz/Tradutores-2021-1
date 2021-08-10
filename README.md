# Tradutores-2021-1
Repositório para o trabalho de Tradures da UnB com a professora Nalon, referente ao primeiro semestre de 2021.

Para a matéria de Tradutores da Universidade de Brasília, o trabalho obrigatório consiste em criar um tradutor que consiga transformar um arquivo escrito na linguagem \textbf{C-IPL} em um código executável através das ferramentas \textit{Flex} e \textit{Bison}. Espera-se que ao implementar o tradutor, o aluno entenda mais profundamente de que maneira os programas são compilados e como certas características de algumas linguagens deixam esse processo mais fácil ou mais difícil.

Para compilar, entre na pasta src onde se encontra o arquivo C_IPL_Lex-Analyzer.l e digite os seguintes comandos para compilar o arquivo .c e já criar seu executável:

  $ flex C_IPL_Lex-Analyzer.l && gcc lex.yy.c -g -Wall

Uma vez com o arquivo a.out (ou qualquer outro nome do arquivo executável criado) na pasta src, digite o seguinte comando para rodar o analisador léxico em arquivos de teste:

  $ ./a.out (caminho para o arquivo)
