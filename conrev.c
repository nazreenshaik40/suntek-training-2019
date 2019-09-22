#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
int j,i,l,temp;
char str[20];
printf("enter string");
scanf("%s",str);
l=strlen(str);
for(i=0;i<=l;i++)
{
if(str[i]!='a'&&str[i]!='e'&&str[i]!='i'&&str[i]!='o'&&str[i]!='u')
{
    for(j=l-1;j>=i;--j)
    {
if(str[j]!='a'&&str[j]!='e'&&str[j]!='i'&&str[j]!='o'&&str[j]!='u')
{
temp=str[i];
str[i]=str[j];
str[j]=temp;
break;
}
}
}
l=j;
}
printf("%s",str);
}
