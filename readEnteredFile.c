//Wrong Code



#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *fp;
	char ch ;
	char str[100];

	printf("\nEnter the file name");
	scanf("%s",str);

	fp= fopen(str,"r");
	if(fp== NULL){
		printf("\nCannot read file\n");
		exit(0);
	}
	while(ch != EOF){
		printf("%c",ch);
		ch= fgetc(fp);
	}
	fclose(fp);


	return 0;
}