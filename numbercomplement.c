#include<stdio.h>

int main(){

	int n = 5;

	printf("The num : %d\n",n);

	unsigned int mask = ~0;
	printf("The mask : %d\n",mask);
	// printf("Num & mask %d\n",n & mask);

	while(n & mask){
		mask <<=1;

	}

	printf("The mask : %d\n",mask);
	printf("The xor : %d\n",n^mask);


	return 0;
}