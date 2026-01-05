#include<stdio.h>
#include<stdlib.h>


enum currency {Dollar =1, Rupee, Euro};

void main(){
	int ch;

	
	do{
		printf("\nEnter choice 1 for Dollar , 2 for Rupee, 3 for Euro and 0 to exit\n");
	scanf("%d", &ch);

		switch(ch){

	case Dollar: printf("\nYou chose Dollar ");
		break;

	case Rupee: printf("\nYou chose Rupee");
		break;

	case Euro: printf("\nYou chose Euro");
		break;
	case 0: exit(0);
	default: printf("\nYou didn't choose any ");
	}
}while(1);
	
}