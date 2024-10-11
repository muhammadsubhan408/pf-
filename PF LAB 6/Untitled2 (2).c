#include <stdio.h>
int main(){
int number;
printf("enter a positive number=");
scanf("%d", &number);
int i=2;
while(i<=number)
	{
	printf("%d\n",i);
	i=i+2;}
return 0;
}
