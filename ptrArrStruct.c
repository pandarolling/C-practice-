#include<stdio.h>

struct Test {
	int a ;
	float b;

}t[5], *p;

int main(){

	p = t;
	printf("\nEnter values");
	for(int i = 0; i<5; i++){
	printf("\nEnter an integer and float value: ");
	scanf("%d%f", &p->a, &p->b);
	p++;
	}
	p = &t[0];
	printf("\nAll values");
	for(int i = 0; i<5; i++){
	printf("\n Integer Value : %d",p->a);
	printf("\n Float Value : %.2f\n",p->b);
	p++;

	}

	return 0;
}