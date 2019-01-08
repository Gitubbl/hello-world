#include<stdio.h>
#include<string.h>
int main()
{
int a[100],i,m,n,j;
n=4;
j=0;
char b[100],c[100];
while(n--)
{
gets(b);
m=strlen(b);
for(i=m-1;i>=0;i--)
{
c[j++]=b[i];
}
c[j]='\0';
puts(c);
if( (strcmp(b,c))==0)
{
printf("yes\n");
}
else
{
printf("no\n");
}
}
return 0;
}
