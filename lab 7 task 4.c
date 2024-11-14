#include <stdio.h>
int main(){
	int i,j,temp;
	int arr[15];
	int sum=0;
	for(i=0;i<15;i++){
	printf("enter %d elements for the arr=",i+1);
	scanf("%d",&arr[i]);
     }
     for(i=0;i<15;i++){
	printf("%d ",arr[i]);
	sum=sum +arr[i];
     }
     printf("\n");
     printf("sum=%d",sum);
		return 0;
	}
