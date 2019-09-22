#include<stdio.h>
int gcd(int,int);
void main()
{
int a,b;
printf("\n enter any two number:");
scanf("%d%d",&a,&b);
printf("\n GCD=%d",gcd(a,b));
}
int gcd(int a,int b)
{
if(b==0)
{
return a;
}
else
{
return gcd(b,a%b);
}
}
