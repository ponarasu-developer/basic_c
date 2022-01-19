//find the perfect number:
/*
explanation:

consider number 6
it is devisible by 1,2,3 and 6:
now add 1+2+3 = 6
if additon of the divisible number is equal to that number 
then it is a perfect number.

*/
#include<stdio.h>
#include<conio.h>
int main(){
int number;
printf("Enter the number:");
scanf("%d",&number);
int sum = 0;
int rem;
for (int i = 1; i < number; i++)
{
    rem = number%i;
    if(rem ==0){
        sum = sum +i;
    }
}

if(sum == number){
    printf("The given number is perfect number:");
}else{
    printf("The given number is not a perfect number:");
}


}