#include <stdio.h>

int main() {

//    char ch;
//    printf("Enter the first letter of your name: ");
//    scanf("%c", &ch);
//    printf("The first letter of your name is %c\n", ch);

//    char c = 'A';
//    char ch;
//    printf("Enter the first letter of your name: ");
//    ch = getchar();
//    printf("First letter your name is %c\n", ch);

//    int num1, num2;
//    printf("Please enter a number: ");
//    scanf("%d", &num1);
//    printf("Please enter another number: ");
//    scanf("%d", &num2);
//    printf("%d + %d = %d\n", num1, num2, num1 + num2);
//    printf("%d - %d = %d\n", num1, num2, num1 - num2);
//    printf("%d * %d = %d\n", num1, num2, num1 * num2);
//    printf("%d / %d = %d\n", num1, num2, num1 / num2);

//    double num1, num2, add, destruction, multiply, divided;
//    printf("Please enter a number: ");
//    scanf("%d", &num1);
//    printf("Please enter another number: ");
//    scanf("%d", &num2);
//
//    add = num1 + num2;
//    destruction = num1 - num2;
//    multiply = num1 * num2;
//    divided = num1 / num2;
//
//    printf("Num1 and num2 addion: %d\n", add);
//    printf("Num1 and num2 destruction is: %d\n",destruction);
//    printf("Num1 and num2 mulitiply is: %d\n", multiply);
//    printf("Num1 and num2 division is: %d\n", divided);


    int num1, num2, value;
    char sign;
    printf("Please enter a number: ");
    scanf("%d", &num1);
    printf("Please enter another number: ");
    scanf("%d", &num2);
    value = num1 + num2;
    sign = '+';
    printf("%d %c %d = %d\n", num1, sign, num2, value);
    value = num1 - num2;
    sign = '-';
    printf("%d %c %d = %d\n", num1, sign, num2, value);
    value = num1 * num2;
    sign = '*';
    printf("%d %c %d = %d\n", num1, sign, num2, value);
    value = num1 / num2;
    sign = '/';
    printf("%d %c %d = %d\n", num1, sign, num2, value);

    return 0;
}
