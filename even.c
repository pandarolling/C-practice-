#include<stdio.h>
#include<stdlib.h>

int main(){
	int x= 1;

	while(x<=10){
		++x;
		if(x%2 !=0){
			continue;
		}
		printf("\n%i is an even number",x);
	}

	return 0;
}