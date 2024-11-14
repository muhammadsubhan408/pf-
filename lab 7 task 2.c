#include <stdio.h>
int main(){
	int i,j,temp;
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	temp=arr[0];
	for(i=0;i<9;i++){
			arr[i]=arr[i+1];
		}
	arr[9]=temp;
	for(i=0;i<10;i++){
		printf("%d ",arr[i]);
	}
		return 0;
	}
