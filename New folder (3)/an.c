#include<stdio.h>
void main()
{
int j,count=0,coun1=0,coun2=0;
char str1[20],str2[20],i;
printf("enter string");
scanf("%s",str1);
for(i='a';i<='z';i++)
{
for(j=0;str1[j]!='\0';j++)
{
if(i==str1[j])
{
count++;
coun1++;
}
}
//printf("%c=%d\n",i,count);
count=0;
}
printf("enter string2");
scanf("%s",str2);
for(i='a';i<='z';i++)
{
for(j=0;str2[j]!='\0';j++)
{
if(i==str2[j])
{
count++;
coun2++;
}
}
//printf("%c=%d\n",i,count);
count=0;
}
if(coun1==coun2)
{
printf("anagram");
}
else
{
    printf("not anagram");
}
}


