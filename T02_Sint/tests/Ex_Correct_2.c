int i;
int count;

int main() {
    int list lst;
    int age;

    lst = NIL;

    count = 10;
    for (i = 0; i < count; i = i + 1) {
        writeln("Digite a idade de um aluno!");
        read(age);
        lst = age : lst;
    }

    for (i = 0; i < count; i = i + 1) {
        age = (age + (% lst));
    }

    write("A soma da idade de todos os 10 alunos é ");write(age);
    
    return 0;
}
