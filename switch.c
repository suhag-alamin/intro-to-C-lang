#include <stdio.h>

int main() {

    char grade = 'A';

    switch(grade) {
        case 'A' :
            printf("Excellent\n");
            break;
        case 'B' :
            printf("Well done\n");
            break;
        case 'C' :
            printf("Good\n");
            break;
        case 'D' :
            printf("Passed\n");
            break;
        case 'F' :
            printf("Halar pola toi fail korchos\n");
            break;
        default:
            printf("Invalid grade\n");
    }
    printf("Your grade is %c\n", grade);


    return 0;
}
