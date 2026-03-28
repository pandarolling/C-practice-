#include <stdio.h>

int main(){

	char name [50];

	fgets(name, 50, stdin);

	// printf("%s\n",name);
	puts(name);

	return 0;
}