#include<stdio.h>
#include<stdlib.h>

struct students{
	char name[30];
	char gender;
	char city[10];
};
int main(){
	struct students s[5];
	int i;
	for(i = 0; i<2; i++){
		printf("\nEnter name");
		gets(s[i].name);
		printf("\nEnter M or F");
		scanf("%c",&s[i].gender);
		printf("\nEnter city");
		gets(s[i].city);

	}

	for(i = 0; i<2; i++){
		printf("\nName");
		puts(s[i].name);
		printf("\nGender");
		printf("%c",s[i].gender);
		printf("\nCity");
		puts(s[i].city);

	}

	return 0;
}