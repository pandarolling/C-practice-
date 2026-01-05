#include<stdio.h>
#include<string.h>


int main(){
	char a[30];
	char b[30];
	printf("\nENter a string:\t");
	gets(a);

	strcpy(b,a);

	printf("\nCopied string:\t%s", b);
	return 0;
}