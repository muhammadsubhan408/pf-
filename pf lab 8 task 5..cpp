#include <stdio.h>
int main(){
	int i,j,k,temp;
	int score[3][3];
	int matrix [3][3];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("enter score for team %d round %d:",i+1,j+1);
			scanf("%d", &score[i][j]);
		}
	}
	printf("scoreboard=\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",score[i][j]);
		}
		printf("\n");
	     }
	     printf("new scoreboard\n");
     for(j=0;j<3;j++){
     	for(i=0;i<3;i++){
     		for(k=i+1;k<3;k++){
     			if(score[i][j]>score[k][j]){
     				temp=score[i][j];
     				score[i][j]=score[k][j];
     				score[k][j]=temp;
				 }
			 }
		 }
	 }
	 	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",score[i][j]);
			}
		printf("\n");
	 }
return 0;
}
