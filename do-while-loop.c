#include <stdio.h>

int main () {

//    int a = 10;
//
//    do {
//        printf("Value of a is %d\n", a);
//        ++a;
//    }
//    while (a <= 20);

    int n;
    int i = 1;
    printf("Please enter a number: ");
    scanf("%d", &n);

    do {
        printf("%d X %d = %d\n", n, i, n * i);
        i++;
    }
    while(i <= 10);


    return 0;
}
