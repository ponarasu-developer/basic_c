/*

find it is a amstrong number::
Armstrong number is a number that is equal to the sum of cubes of its digits. 
For example 0, 1, 153, 370, 371 and 407 are the Armstrong numbers.
consider:
153 = (1*1*1)+(5*5*5)+(3*3*3)  
where:  
(1*1*1)=1  
(5*5*5)=125  
(3*3*3)=27  
So:  
1+125+27=153 
*/

#include<stdio.h>
int main(){

int number;
scanf("%d",&number);
int sum =0;
int temp = number;
while (temp !=0)
{
    int last = temp%10;
    sum =sum + (last*last*last);
temp = temp/10;
    
}

if(number == sum){
    printf("It is a amstrong number");
}else{
    printf("It is not a amstrong number");
}



}