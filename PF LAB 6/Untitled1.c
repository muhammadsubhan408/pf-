#include <stdio.h>
int main(){
int num;
int fact=1;
int i;
printf("enter a number=");
scanf("%d", &num);
if(num<0)
{
	printf("enter a positive number=");
}
else
{
    
	  for(i=1;i<=num;i++){
	  

	fact=fact*i;}

	printf("factorial for %d is %d",num,fact);	

}
}
