#include <stdio.h>
int main(){
	int i,j;
	int max=-10000;
	int min =99999;
	int arr[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,1,2,3,4,5,6,7,8,9,10};
	
	for(i=0;i<20;i++){
		if(arr[i]>max){
		
		max=arr[i];
	     }
		}
		
	for(i=0;i<20;i++){
		if(arr[i]<min){
		min=arr[i];
	     }
		}
	printf("minimum is %d\n",min);
	printf("maximum is %d",max);
		return 0;
	}
