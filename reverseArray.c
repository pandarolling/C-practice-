#include<stdio.h>

int main(){
	int n, i;
	printf("Enter size of array ");
	scanf("%d",&n);

	int a[n];

	printf("\nEnter all elements");

	for(i=0; i<n; i++){
	scanf("%d",&a[i]);
	}

	printf("\nBefore reversing");
	for(i=0; i<n; i++){
	printf("\n%d",a[i]);
	}

	for(i=0; i<n/2; i++){
		int temp; 
		temp = a[i];
		a[i] = a[n-i-1];
		a[n-i-1] = temp;

	}

	printf("\nAfter reversing");
	for(i=0; i<n; i++){
	printf("\n%d",a[i]);
	}



	return 0;
}