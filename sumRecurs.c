#include<stdio.h>
//calculate sum from 1 to n
int sumR(int);

int main(){
	int lim, sum;
	printf("\nEnter a limit\n");
	scanf ("%d",&lim) ;

	sum = sumR(lim);
	printf("\nSum of 1 to %d is %d\n", lim, sum);


	return 0;
}

	int sumR(int x){
		if(x == 1)
			return 1;
		else
			return x + sumR(x-1);
	}