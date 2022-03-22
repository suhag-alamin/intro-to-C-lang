#include <stdio.h>

int main() {

    int marks;

    printf("---------------------------------\n");
    printf("Enter the marks between 0 to 100: ");

    scanf("%d", &marks);

    if (marks > 100) {
        printf("Don't Be Smart Enter your Marks Between Limit \n");
    }
    else {
        switch (marks/10) {
            case 10 :
            case 9 :
            case 8 :
                printf("Your grade is A\n");
                break;
            case 7 :
                printf("Your grade is B\n");
                break;
            case 6 :
                printf("Your grade is C\n");
                break;
            case 5 :
                printf("Your grade is D\n");
                break;
            case 4 :
                printf("Your grade is E\n");
                break;
            default :
                printf("You are failed\n");

        }
    }


    return 0;
}
