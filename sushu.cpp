#include<stdio.h>
int main()
{
int i,j=1,m=0,n;
scanf("%d",&n);
for(i=2;i<n;i++)
{
j=n%i;
if(j==0)
m=1;
break;
}
if(m==0)
printf("%d������",n);
else if(m==1)
printf("%d��������",n);

return 0;
}
