#include<stdio.h>
void prntNums(int, int);
int c =1;
int main(){
	int limit ; 

	printf("\nEnter the limit\n");
	scanf("%d", &limit);
	printf("\n\n");

	prntNums(limit, 1);


	return 0;

}

void prntNums(int n, int c){
	if(c <= n){
		printf("%3d ", c);
		prntNums(n, c+1);
	}
}