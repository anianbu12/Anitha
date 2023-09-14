#include<stdio.h>
#include<stdlib.h>
int main()
{
int a,x,b;
b=0;
x=0;
//assigned to x
printf("Enter a number:");
scanf("%d", &a);
while(a !=x) {
// checks whether a is not equal to zero
b+=a;
printf("Enter a number: ");
scanf("%d", &a);
}
printf("Sum is %d",b);
return 0;
}