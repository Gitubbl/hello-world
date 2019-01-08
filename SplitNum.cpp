#include <stdio.h>
int main()
{
int n, lengh=0, i, sum=0;
int a[40];
scanf("%d",&n);
while(n)
{
a[lengh++] = n%10;
n/=10;
}
for(i = 0; i < lengh; i++)
{
printf("%d ", a[i]);
}
printf("\n");
for( i=lengh-1;i>=0;i--)
{
printf("%d ", a[i]);
}
return 0;
}
