// Comentário inline que será ignorado

/* Comentário em bloco 
multilinhas 
que será ignorado
*/

int number;
float number2;
float number3;
float number4;
float number5;
float number6;
int list LST;

number = 12;
number2 = 12.12;
LST = NIL;

int main() {

number3 = (5 + 5);
number4 = (5 - 5);
number5 = (5 * 5);
number6 = (25 / 5);

if ((number3 == number4) && (number6 > number3)) {
    number3 = number4;
} else if ((number != number2) || (number5 < number2)) {
    number = 0;
} else if ((!number2 >= number4) || (!number3 <= number6)) {
    number5 = 5;
}
return 0;

}
