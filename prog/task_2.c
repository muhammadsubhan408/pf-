#include <stdio.h>

int main(){
int a1 ,a2 ,a3;
int sum;
printf("enter all 3 angles");
scanf("%d %d %d", &a1, &a2, &a3);
sum=a1+a2+a3;
if(a1>0 && a2>0 && a3>0)
{
if(sum==180)
{
printf("it is a triagnle");
}
else
{
printf("it is not a triangle");
}
}
else
{
printf("enter correct values that must be positive");
}
return 0;
}
