// swapping of a number
/*
swapping of a two digit number.
sample input = 46
sample output = 64

*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter two digit number:");
    scanf("%d",&n);
    int swapped = ((n%10)*10) +(n/10);
    printf("%d",swapped);


}