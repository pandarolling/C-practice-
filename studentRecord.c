#include<stdio.h>
#include<stdlib.h>

struct Student{
	char name[30];
	int age;
}s[100];

int main(){
	int i ,n;

	FILE *fp;

	//code to write students info
	fp =fopen("student_file","ab");
	if(fp == NULL){
		printf("\nCannot perform the operation");
		exit(0);
	} 

	printf("\nEnter no. of students: ");
	fflush(stdin);
	scanf("%d",&n);
	while(getchar() != '\n');


	printf("\nEnter info of %d students\n",n);

	for(i =0; i<n; i++){
		printf("\nEnter name:");
		fflush(stdin);
		gets(s[i].name);
		printf("\nEnter age:");
		fflush(stdin);
		scanf("%d",&s[i].age);
		while(getchar() != '\n');
		fwrite(&s[i], sizeof(struct Student), 1, fp);
	}
	printf("\nData saved successfully\n\n");

	fclose(fp);

	//code to read students info
	fp =fopen("student_file","rb");
	if(fp == NULL){
		printf("\nCannot perform the operation");
		exit(0);
	}

	i = 0;
	while(fread(&s[i],sizeof(struct Student),1,fp)){
		printf("\n%d. Name of student: ",i+1);
		puts(s[i].name);
		printf("   Age: ");
		printf("%d\n",s[i].age);
		i++;
	} 
	fclose(fp);

	return 0;
}