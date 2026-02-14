// detab.c
#include<stdio.h>

int main(){
	int n =8 ;
	int column	= 0;
	int c;
	// printf("Enter the tabstop column : ");
	// scanf("%d",&n);

	while((c = getchar()) != EOF){
	 	if(c == '\n'){
		 column =0;
			putchar(c);

		}else
		if(c == '\t'){
			for(int i = 1; i <= n-(column%n); i++){
				printf(" ");
			}
			 column += n-(column%n);
		}else{
			 column++;
			putchar(c);
		}
	}


	return 0;

}