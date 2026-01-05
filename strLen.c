#include<stdio.h>
#include<string.h>

int main(){
	int len;

	//ways to declare string
	//1.direct 
	char a[]= {'h','i','\0'};
	char *b= "Hello";

	//2. indirect 
	char c[30];
	gets(c);

	len = strlen(a);
	printf("\nLength of array a : %d",len);
	
	len = strlen(b);
	printf("\nLength of array a : %d",len);

	len = strlen(c);
	printf("\nLength of array a : %d",len);

	return 0;
}