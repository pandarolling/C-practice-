#include<stdio.h>
int i;
//printing array with recursion
void prntarr( int a[], int size, int pos){
	if(pos >= size)
		return;

	printf("[%04d]\n",a[pos]);

	prntarr(a, size, pos+1);
}

int main(){
	int a[5];
	printf("\nEnter 5 array elements :\n");

	for(i = 0; i<5; i++){
		scanf("%d", &a[i]);
	}

	prntarr(a , 5, 0);//array, size, position from 0 
	return 0; 
}