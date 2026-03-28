#include<stdio.h>

int lower(int c){
	if( c >= 'A' && c <= 'Z'){
		return c+ 'a' -'A';
	}else{
		return c;
	}
}
int main(){

	char c = 'B';

	printf("%c\n",lower(c) );

	return 0;
}