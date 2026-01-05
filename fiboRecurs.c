#include<stdio.h>
//fibonacci series using recursion
void fibo (int, int, int, int);

int main(){
	int lim, sum;
	printf("\nEnter a limit\n");
	scanf ("%d",&lim);

	fibo(0,1, lim, 1); // lowerlimit, upperlimit, total numbers to be printed , iteration count

	return 0;
}

void fibo(int ll, int ul,int  lim, int count){
	if(count <= lim){
		printf("\t%d", ul);
		ul = ll + ul;
		ll = ul - ll;
		fibo(ll, ul, lim, count+1);
	}
}