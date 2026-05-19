// quicksort.c

#include<stdio.h>

void quicksort(int *, int ,int);
int split(int *, int ,int);

int main(){

	int n;
	printf("\nEnter number of elements :");
	fflush(stdin);
	scanf("%d",&n);
	int a[n];
	int i;
	printf("Enter all elements\n");

	for(i = 0;  i< n; i++){
		scanf("%d",&a[i]);

	}

	quicksort(a,0, n-1);

	printf("\nArray after sorting : \n");
	for(i = 0; i < n; i++){
		printf("%d ",a[i]);
	}


	return 0;

}


void quicksort(int *a, int lower, int upper){

	if(lower < upper){
		int d = split(a, lower , upper);
		quicksort(a, lower, d-1);
		quicksort(a, d+1, upper);
	}
}

int split(int * a, int lower, int upper){
	int pivot , temp, q, p;

	pivot = a[lower];
	// printf("\nPivot  = %d ",pivot);	
	p = lower+1;
	q = upper;

	while(q >= p){
		while(a[p] < pivot)
			p++;
		while(a[q] > pivot)
			q--;

		if(q >= p){
			temp = a[p];
			a[p] = a[q];
			a[q] = temp;
		}

	}

	temp = a[q];
	a[q] = a[lower];
	a[lower] = temp;

	return q;
}