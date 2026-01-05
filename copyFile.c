#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *fw ,*fr;
	char fir[40], sec[40];
	char ch;

	printf("\nEnter the name of file you want to copy:\t");
	scanf("%s",fir);
	 //check
	while(getchar() != '\n');

	printf("\nEnter the name of the newFile:\t");
	scanf("%s",sec);
	while(getchar() != '\n');


	fr= fopen(fir,"r"); //check
	fw = fopen(sec,"w");//check

	if(fw == NULL || fr == NULL){
		printf("\nCannot perform the operation.");
		exit(0);
	}

	ch = fgetc(fr);
	while(ch != EOF){
		fputc(ch,fw);
		ch = fgetc(fr);
	}

	fclose(fw);
	fclose(fr);

	printf("\nData copied Successfully");

	return 0;

}
