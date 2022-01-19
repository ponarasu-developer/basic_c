/*
find if it is prime number is not:
here n is input number
we use m because if the loop statify half of n the no need to check another half(saving space and time)
flag is a normal integer to count  how many time n is divided.
 
*/


#include<stdio.h>  
int main(){    
int n,i,m=0,flag=0;    
printf("Enter the number :");    
scanf("%d",&n);    

m=n/2;

for(i=2;i<=m;i++)    
{    
if(n%i==0)    
{    
printf("Number is not prime");    
flag=1;    
break;    
}    
}    
if(flag==0)    
printf("Number is prime");     
return 0;  
 }    