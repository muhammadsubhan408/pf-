#include <stdio.h>
int main(){
	int i,j,temp;
	int arr[12];
	int brr[6];
	for(i=0;i<12;i++){
	printf("enter %d elements for the arr=",i+1);
	scanf("%d",&arr[i]);
     }
     for(i=0;i<12;i++){
	printf("%d ",arr[i]);
     }
     for (i = 0; i < 6; i++) {
        brr[i] = arr[2 * i] + arr[2 * i + 1];
    }
    printf("\n");
    for(i=0;i<6;i++){
	printf("%d ",brr[i]);
     }
		return 0;
	}
