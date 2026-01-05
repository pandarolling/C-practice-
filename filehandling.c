//program to write some characters type data in text file

#include<stdio.h>
#include<stdlib.h>

void read_data(FILE *fp){
	char ch;
	printf("\n********************************\n");

	fp = fopen("datafile","r");

	if(fp==NULL){
		printf("\nCannot read file\n");
		exit(0);
	}
	//code to read file
	printf("\nContents of file:-\n");

	ch = fgetc(fp);
	while(ch != EOF){
		printf("%c",ch);
		ch = fgetc(fp);
	}
	printf("\n********************************\n");
	fclose(fp);
}

void write_data(FILE *fp){
	char ch ;
	printf("\n********************************\n");
	fp = fopen("datafile","w");

	if(fp==NULL){
		printf("\nCannot create file");
		exit(0);
	}

	//code to write data
	printf("Enter data into file and press $ to stop\n>");
	while(1){
		ch = getchar();		//scanf("%c",&ch);
		if(ch=='$')
		break; 
		fputc(ch,fp);     
	}

	printf("\nData Saved Successfully\n");
	printf("\n********************************\n");
	fclose(fp);
}

void append_data(FILE *fp){
	char ch ;
	printf("\n********************************\n");
	fp = fopen("datafile","a");

	if(fp==NULL){
		printf("\nCannot append file");
		exit(0);
	}

	//code to append data
	printf("Enter data into file and press $ to stop\n>");
	while(1){
		ch = getchar();		//scanf("%c",&ch);
		if(ch=='$')
		break; 
		fputc(ch,fp);     
	}

	printf("\nData Saved Successfully\n");
	printf("\n********************************\n");
	fclose(fp);
}

int main(){
	FILE *fp;
	char ch;
	int choice;


do{
	printf("\nEnter 1 to write into file");
	printf("\nEnter 2 to read from file");
	printf("\nEnter 3 to append into file");
	printf("\nEnter 0 to exit file\t");
	scanf("%d",&choice);
	getchar();
	switch(choice){
	case 1: write_data(fp);
		break;
	case 2: read_data(fp);
		break;
	case 3: append_data(fp);
		break;
	case 0: exit(0);
		break;
	default:printf("\nEnter a valid choice\n");
	}
}while(1);

	return 0;
}