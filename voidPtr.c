#include<stdio.h>

int main(){
	char *ptr;

		int a =1;
		printf("\n%d",a);
		ptr= (char *)&a;
		printf("\n%d",*ptr);
		printf("\n%ld",sizeof(a));


		return 0;
}