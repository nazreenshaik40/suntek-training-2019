#include<stdio.h>
void main()
{
int j,count=0;
char str[20],i;
printf("enter string");
scanf("%s",str);
for(i='a';i<='z';i++)
{
for(j=0;str[j]!='\0';j++)
{
if(i==str[j])
{
count++;
}
}
printf("%c=%d\n",i,count);
count=0;
}
}
