#include<stdio.h>

int main(){
	char a[30];
	int i =0;
	printf("\n Enter your username");

	gets(a);
	while(a[i] != '\0')
		i++;
	printf(" Username : ");

	puts(a);
	printf("i = %d", i);

	return 0;

}