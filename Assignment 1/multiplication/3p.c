#include<stdio.h>
#include<stdlib.h>
int main()
{
int a,b,c,i;
printf("Enter a number: ");
scanf("%d", &a);
printf("Enter the maximum multiplier:");
scanf("%d", &b);
for (i=0;i<=b;i++){ 
c=a*i;
printf("%d\n",c);
}
}