#include <stdio.h>

int main () {

//    while loop

//    int n = 1;
//    while(n <= 100) {
//        printf("%d\n", n);
//        n++;
//    }

//    int n = 1;
//    while(n <= 100) {
//        printf("%d \n", n);
//        n++;
//        if (n > 10 ) {
//            break;
//        }
//    }

//    int n = 0;
//    while(n < 10) {
//        n++;
//       if (n % 2 == 0) {
//        continue;
//       }
//        printf("%d\n", n);
//    }

//    int n = 5;
//    int i = 1;
//    while(i <= 10) {
//        printf("%d X %d = %d \n", n, i, n*i);
//        i++;
//    }

//    for loop my fav

//    int n = 5;
//    int i;
//    for(i = 1; i <= 10; i++){
//        printf("%d X %d = %d\n", n, i, n*i);
//    }

//    int m, n = 5;
//    int i;
//    m = 0;
//    for (i = 1; i <= 10; i++) {
//        m = m + n;
//        printf("%d X %d = %d\n", n, i, m);
//    }

    int n, i;

    for (n = 1; n <= 20; n++) {
        for (i = 1; i <=10; i++) {
            printf("%d X %d = %d\n", n, i, n*i);
        }
    }


    return 0;
}
