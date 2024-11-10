#include <stdio.h>
int main(){
	int i,j,n;
	printf("enter a number:");
	scanf("%d",&n);
for(i=1;i<=n;i++){
	for(j=1;j<=n;j++){
		if(i==n || j==n){
			printf("*");
		}
		else if(i==1 || j==1){
			printf("*");
		}
		else if(i==j){
			printf("*");
		}
		else if(i+j==n+1){
			printf("*");
		}
		else{
			printf(" ");
		}
	}
	printf("\n");
}
return 0;
}
