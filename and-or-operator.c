#include <stdio.h>

int main() {

//    and operator &&
//    char ch = 's';
//
//    if (ch >= 'a' && ch <= 'z') {
//        printf("%c is lower case\n", ch);
//    }
//    else if (ch >= 'A' && ch <= 'Z') {
//        printf("%c is upper case", ch);
//    }

//    or operator ||

//    int num = 50;
//    if (num >= 1 || num <= 10) {
//        printf("Yes \n");
//    }
//    else{
//        printf("no \n");
//    }

    char ch;
    printf("Please enter a letter: ");
    scanf("%c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch =='u') {
        printf("%c is a vowel\n", ch);
    }
    else{
        printf("%c is a consonent\n", ch);
    }


    return 0;
}
