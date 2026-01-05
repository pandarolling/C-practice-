#include<stdio.h>

struct Test{
	int a ;
	float b;
};

int main(){
	struct Test t;
	struct Test *p;
	p = &t;
	printf("\nEnter an integer and float value: ");
	scanf("%d%f", &p->a, &p->b);

	printf("\n Integer Value : %d",p->a);
	printf("\n Float Value : %.2f\n",p->b);



	return 0;
}