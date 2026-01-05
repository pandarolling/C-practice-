#include<stdio.h>

int main(){
	int a = 3;
	int *p; int **q;
	p = &a;
	q = &p;


	printf("%p\n", q);
	printf("%p\n", p);
	printf("%p\n", &q);
	printf("%p\n", &p);
	printf("%p\n", *q);
	printf("%d\n", **q);
	printf("%d\n", ***(&q));
	printf("%p\n", **(&q));



	return 0;
}