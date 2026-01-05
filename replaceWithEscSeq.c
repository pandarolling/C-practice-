#include<stdio.h>

int main(){


	int c;
	printf("\nEnter something .. escape sequence will be replaced with their correspondence\n");
	while((c =getchar()) != EOF){
		if(c =='\t'){
			putchar('\\');
			putchar('t');

		}
		else if(c =='\b'){
			putchar('\b');
			putchar('\\');
			putchar('b');
		}
		else if(c =='\\'){
			putchar('\\');
			putchar('\\');
		}
		else
			putchar(c);

	}
	return 0;
}
