#include <stdio.h>
int main(){
	int i,j,n;
	int count;
	printf("enter a number to search:");
	scanf("%d", &n);
	int arr[6]={2,3,7,6,5,1};
	for(i=0;i<6;i++){
		if(arr[i]==n){
			printf("number %d found at index %d",n,i);
			count=1;
		}
	
		}
		if(count!=1){
			printf("number not found");
		}


		return 0;
	}
