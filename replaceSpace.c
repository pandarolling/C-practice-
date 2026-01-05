#include<stdio.h>

int main(){
	int c;
	printf("\nEnter something .. blank spaces will be replaced with single space\n");
	while((c =getchar()) != EOF){
		if(c ==' '){
			while((c =getchar()) == ' ');
			putchar(' ');
		}
		putchar(c);

	}
	return 0;
}