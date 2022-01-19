// swapping two numbers
/*
swapping of two numbers
sample input 40 60
sample output 60 40
*/

#include<stdio.h>
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int new = n;
   n=n+m;//n=30 (10+20)
m=n-m;//m=10 (30-20)
n=n-m;//n=20 (30-10)
printf("%d\n%d",n,m);
}