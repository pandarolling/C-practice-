#include<stdio.h>
#include<stdlib.h>
int main(){
	int arow, acol, brow, bcol, i,j;

	printf("\nEnter size of Array A :");
	scanf("%d%d", &arow, &acol);
	

	brow= acol;
	bcol = arow;
	int a[arow][acol], b[brow][bcol];

	printf("\nEnter elements for A:-\n");
	for(i=0; i<arow; i++){
		for(j=0; j<acol; j++){
		scanf("%d",&a[i][j]);
		}
		printf("\n");
	}

	for(i=0; i<brow; i++){
		for(j=0; j<bcol; j++)
		{
			b[i][j] = a[j][i];
		}
	}


	for(i =0; i<brow; i++){
		for(j =0; j<bcol; j++){
			printf("%d\t", b[i][j]);
		}
		printf("\n");
	}

	return 0;
	
	}
