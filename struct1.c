#include<stdio.h>

struct student
{
	char name[30];
	char addr[40];
	long phone;
};

int main(){
	struct student s[3];
	int i;

	printf("\nEnter details of students");

	for(i=0; i<3; i++){
		printf("\nEnter name :");
		gets(s[i].name);
		printf("\nEnter address :");
		gets(s[i].addr);
		printf("\nEnter phone :");
		scanf("%ld",&s[i].phone);
		while(getchar() !='\n');
	}

	printf("\nInfo of all students:\n");

	for(i =0; i<3; i++){

		printf("\nName: ");
		puts(s[i].name);
		printf("\nAddress: ");
		puts(s[i].addr);
		printf("\nPhone No. :");
		printf("%ld",s[i].phone);
	}

	return 0;
}