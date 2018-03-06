#include<stdio.h>
#include<string.h>
void main()
{
char a[10],b[10];
int i,c=0,l;
printf("enter the two strings:");
scanf("%s",a);
scanf("%s",b);
l=strlen(a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]==b[i])
c++;
break;
}
if(a[0]>b[0])
{
printf("%s",a);
}
else
{
printf("%s",b);
}
if(l==c)
{
printf("%s",a);	
}
}
