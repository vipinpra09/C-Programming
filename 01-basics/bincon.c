#include <stdio.h>
int main ()
{
int a,b,i;
i = 0;
int bit[32];
printf("enter number :");
scanf("%d",&a);

if(a == 0)
{
printf("0\n");
}
else
{
while(a > 0)
{
b = a % 2;
bit[i] = b;
a = a/2;
i++;
}

for(i = i - 1;i >= 0;i--)
{
printf("%d",bit[i]);
}
printf("\n");
}
return 0;
}