#include<stdio.h>

long long fact(int);

int main(){
	int num;
	
	long long ans;

	printf("eNTER a num");
	scanf("%d",&num);

	ans = fact(num);

	printf("\nAnswer is %Ld\n",ans);

	return 0;

}

long long fact(int n){
	
	if(n == 1){
		return 1;
	}
	else
	{
		return n * fact(n-1);
	}

}