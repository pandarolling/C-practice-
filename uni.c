#include<stdio.h>

union State {
	int on, off;

}s[5];

int main(){
	int temp, i;
	printf("\nEnter the states of 5 switches of your room");
	printf("\nEnter 1 for on \n0 for off\n");

	for(i = 0; i<5; i++){
		printf("\nSwitch No. %d:\t",i+1);
		scanf("%d", &temp);
		if(temp==1)
			s[i].on=1;
		else
			s[i].off=0;
	}

	printf("\nCondition of your room switches");

	for(i = 0; i<5; i++){
		printf("\nSwitch No. %d:\t",i+1);
		if(s[i].on==1)
			printf("ON");
		else
			printf("OFF");
	}

	return 0;
}