#include <stdio.h>
int main(){
	int i,j,r,c,k,l,m,n,sum;
	printf("the number of rows and the number of coloumns for both matrices must be same\n");
	printf("enter number of rows:");
	scanf("%d", &r);
	printf("enter number of coloumns:");
	scanf("%d", &c);
	int matrice1[r][c];
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("enter element for row %d and coloumn %d for first matrice:",i+1,j+1);
			scanf("%d", &matrice1[i][j]);
		}
	}
	printf("element for matrice 1 are:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
	        printf("%d ",matrice1[i][j]);
		}
	printf("\n");
	}
	int matrice2[r][c];
	
	for(k=0;k<r;k++){
		for(l=0;l<c;l++){
			printf("enter element for row %d and coloumn %d for 2nd  matrice:",k+1,l+1);
			scanf("%d", &matrice2[k][l]);
		}
	}
	printf("element for matrice 2 are:\n");
	for(k=0;k<r;k++){
		for(l=0;l<c;l++){
	        printf("%d ",matrice2[k][l]);
		}
	printf("\n");
	}
	int sums[r][c];
	printf("the sum of the matices are :\n");
	for(m=0; m<r ; m++){
		for(n=0 ; n<c ; n++){
			sums[m][n]=matrice1[m][n]+matrice2[m][n];
			printf("%d ",sums[m][n]);
		}
		printf("\n");
	}
	
	return 0;
}
