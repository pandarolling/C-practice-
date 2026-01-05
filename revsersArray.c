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
	printf("%d",a[i]);
	}



	return 0;
}