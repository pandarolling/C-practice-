#include<stdio.h>


int nthfibo(int lo, int hi, int n){

	if(n < 0)
		return lo;
	if(n == 0){
		return hi;
	}else{
		return nthfibo(hi, hi + lo, n-1);
	}
}
int main(){

	int  n;
	scanf("%d", &n);

	int ans = nthfibo(0 , 1 , n-2);

	printf("\nAns  = %d", ans);
	return 0;



}