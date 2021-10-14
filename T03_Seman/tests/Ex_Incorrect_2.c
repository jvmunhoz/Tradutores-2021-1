int i;
int count;

int main() {
    int list lst;
    float list flst;
    int age;
    float age2;

    lst = NIL;

    count = 10;
    for (i = 0; i < count) { // falta a ultima parte do for aqui
        writeln("Digite a idade de um aluno!");
        read(age) //falta um ; aqui
        lst = age : lst;
    }

    for (i = 0; i < count; i = i + 1) {
        age = (lst + (?lst)); // Nao pode haver soma de listas
    }

    write("A soma da idade de todos os 10 alunos é ");write(age);
    
    return lst;
}