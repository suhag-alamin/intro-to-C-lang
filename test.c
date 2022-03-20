#include <stdio.h>

int main () {

int i,j,k;
scanf("%d", &i);
while (i<=10)
{
    printf("%d", i);
    i++;
    if(i==5)
        break;
}
return 0;

}
