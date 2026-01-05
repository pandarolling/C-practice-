//program to store and print books name , author , publisher and price in lIbrary

#include<stdio.h>

struct books{
	char b_name[50];
	char auth_name[50];
	char pub_name[50];
	float price;
}b[100];

int main(){
	int i,n;

	printf("\nEnter no. of entries in your Library");
	scanf("%d",&n);
	while(getchar() !='\n');

	for(i =0; i<n;i++){
		printf("\nEnter Details for book no. %d:-",i+1);
		printf("\n\tEnter Book name:\t");
		gets(b[i].b_name);
		
		printf("\n\tEnter Author name:\t");
		gets(b[i].auth_name);

		printf("\n\tEnter Publisher name:\t");
		gets(b[i].pub_name);

		printf("\n\tEnter Price:\t");
		scanf("%f", &b[i].price);
		while(getchar() !='\n');
	}
	printf("\n********************************");
	printf("********************************");
	for(i =0; i<n;i++){
		printf("\nDetails for book no. %d:-",i+1);
		printf("\n\tBook name:\t");
		puts(b[i].b_name);
		
		printf("\n\tAuthor name:\t");
		puts(b[i].auth_name);

		printf("\n\tPublisher name:\t");
		puts(b[i].pub_name);

		printf("\n\tPrice:\t");
		printf("%.2f\n", b[i].price);
		
	}


}