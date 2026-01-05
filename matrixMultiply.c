#include<stdio.h>
#include<stdlib.h>
int main(){
	int arow, acol, brow, bcol, i,j;

	printf("\nEnter size of Array A :");
	scanf("%d%d", &arow, &acol);
	printf("\nEnter size of Array B :");
	scanf("%d%d", &brow, &bcol);

	if (acol != brow){
		printf("Can't multiply");
 		exit(0);
	}
	int a[arow][acol], b[brow][bcol];
	printf("\nEnter elements for A:-\n");
	for(i=0; i<arow; i++){
		for(j=0; j<acol; j++){
		scanf("%d",&a[i][j]);
		}
		printf("\n");
	}

	printf("\nEnter elements for B:-\n");
	for(i=0; i<brow; i++){
		for(j=0; j<bcol; j++){
		scanf("%d",&b[i][j]);
		}
		printf("\n");
	}


	//making c matrix
	int crow = arow;
	int ccol = bcol; 
	int c[crow][ccol];

	for(i=0 ; i<crow; i++){

		for(j=0; j<ccol; j++){
			c[i][j]	 =0;
			for(int k= 0; k<acol; k++){
				c[i][j] = c[i][j]+(a[i][k]*b[k][j]);
			}
			

		}
	}

	//printing matrix c:
	printf("\n The C matrix is :\n");

	for(i=0; i<crow; i++){
		
		for(j=0; j<ccol; j++){
			printf("\t[%d]",c[i][j]);
		}
		
		printf("\n");
	}

	return 0;
}