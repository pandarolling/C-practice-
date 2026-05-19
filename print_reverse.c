#include<stdio.h>
#include<string.h>


void print_reverse(char *str){
	size_t len = strlen(str);

	char *t = str + len -1;
	while(t >= str){
		printf("%c", *t);
		t--;
	}
	puts("");
}
int main(){

	char identifier[50];
	fgets(identifier, 50, stdin);
	int i = 0;
	while(identifier[i] != '\n') i++;
	identifier[i] = '\0';

	// puts(identifier);
	print_reverse(identifier);
	return 0;
}	