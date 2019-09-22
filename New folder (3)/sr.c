#include<stdio.h>
void main()
{
int j,l,temp;
char str[20];
printf("enter string");
scanf("%s",str);
l=strlen(str);
int i=0;
//while(str[i]!='\0')
//{
for(i=0;i!=l;i++)
{
if(str[i]!='a'||'e'||'i'||'o'||'u')
{
    for(j=l;i!=j;j--)
    {
if(str[l]!='a'||'e'||'i'||'o'||'u')
{
temp=str[i];
str[i]=str[l];
str[l]=temp;
//break;
}
}
}
//}
}
printf("%c",str);
}
