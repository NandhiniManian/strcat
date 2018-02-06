#include<stdio.h>
void main()
{
char a[30],b[30];
printf("Enter the two srings:"\n);
gets(a);
gets(b);
printf("the two strings are:%s\n%s\n",a,b);
for(i=0;a[i]!='\0';i++)
for(j=0;b[j]!="\0";++j;++i)
{
a[i]=b[j];
}
a[i]!='\0';
printf("combination of two string is:%s",a);
}
