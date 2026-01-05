#include<stdio.h>
#include<stdlib.h>

int main(){
	 int lim;

	printf("\nAscii Values Program");
	printf("\nHow many values would you like to print at a time : ");
	scanf("%d",&lim);
	while(getchar() != '\n');
	if(lim == 0)
		exit(0);

	for(int i = 0; i<=255; i++){

		printf("\nASCII Value at %d  : %c",i,i);
		if(i%lim ==0  &&i != 0){
			int rem = 255-i;
			if(rem == 0)
				break;

			printf("\nPress ENTER to continue or anyting else to break");
			
			char ch = getchar();
			fflush(stdin);
			if(ch=='\n'){
				

				if (rem<lim )
				{
				printf("\nPrinting next %d values",rem);
				}
				else
				printf("\nPrinting next %d values",lim);
				
			}else break;
		}
	}


	return 0;
}