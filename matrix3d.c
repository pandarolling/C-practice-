#include<stdio.h>

int main(){
	int row, col, dep, i,j,k;

	printf("The 3d array program");
	printf("\nGive Row, Column and depth of the array");
	scanf("%d%d%d",&row,&col,&dep);
	
	int arr[row][col][dep];

	printf("\nEnter elements for the array");

	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			for(k=0; k<dep; k++){
				printf("arr[%d][%d][%d]: ",i, j, k);
				scanf("%d", &arr[i][j][k]);
			}
			printf("\n");
		}
	}

	for(i=0; i<row; i++){
		for(j=0; j<col; j++){
			for(k=0; k<dep; k++){
				printf("\t[%d]", arr[i][j][k]);
			}
		}
	}

	return 0;

}