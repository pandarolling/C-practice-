#include<stdio.h>

void swap(int *, int *);

int main(){
	int a, b;

	printf("\nEnter two numbers : \n");
	scanf("%d%d", &a, &b);
	printf("\nBefore swap \n a = %d\n b = %d\n",a, b);

	swap(&a, &b);

	printf("\nAfter swap \n a = %d\n b = %d\n",a, b);


	return 0;

}

void swap(int *f, int *s){
	int c ;
	c = *f;
	*f = *s;
	*s = c;
}