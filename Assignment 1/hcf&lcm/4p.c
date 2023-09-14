#include<stdio.h>
#include<stdlib.h>
int main()
{
int a,b,n1,n2, temp, hcf,1cm;
printf("Enter two numbers: \n");
scanf("%d \t %d",&a,&b);
n1=a;
n2=b;
while (n2!=0){
temp=n2;
n2=n1%n2;
n1=temp;
}
hcf=n1;
1cm=(a*b)/hcf;
printf("The hcf of %d and %d is %d\n",a,b,hcf);
 printf("The Icm of %d and %d is %d\n",a,b,lcm);
return 0;
}