#include<stdio.h>

long power(int x, int y){

	if(y == 1)
		return x;
	else
		return x * power(x, y-1);
}

int main(){
int x, y;
long ans;  
printf("\nEnter a Number and it's power\n");

scanf("%d%d", &x, &y);

ans = power(x, y );

printf("\n%d to the power of %d is %ld\n\n",x,y,ans);
	return 0;
}