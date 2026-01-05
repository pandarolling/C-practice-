#include<stdio.h>
#include<stdlib.h>

struct student{
	char name[30];
	char enroll[10];
	int age;
}s[100];

struct employee{
	char name[30];
	char addr[10];
}e[20];

struct faculty{
	char name[30];
	char dname[30];
	int salary;
	
}f[50];

int main(){
	FILE *fp; //two file pointers so we can perform copying too //fs 
	char firFName[20], secFName[20];//in case user gives the name of the files
	int choice, n, i;

	while(1){
		printf("\n********************************************" );
		printf("\nEnter 1 to write into the student file" );
		printf("\nEnter 2 to read from the student file" );
		printf("\nEnter 3 to write into the faculty file" );
		printf("\nEnter 4 to read from the faculty file" );
		printf("\nEnter 5 to write into the employee file" );
		printf("\nEnter 6 to read from the employee file" );
		printf("\nEnter 0 to exit" );

		scanf("%d",&choice);
		while(getchar() != '\n');

		switch(choice){
		case 1: //code to write into student file

				fp = fopen("studentRec","ab");
				if(fp==NULL){
					printf("\nCannot write\n");
					break;
				}
				printf("\n********************************************" );
				printf("\nEnter number of students :");
				scanf("%d",&n);
				while(getchar() !='\n');

				for(int i=0; i<n; i++){
				printf("\n%d. Enter Name of the student: ",i+1);
				gets(s[i].name);
				printf("   Enter enrollment no. of the student: ");
				gets(s[i].enroll);
				printf("   Enter age of the student: ");
				scanf("%d",&s[i].age);
				while(getchar() != '\n');

				//putting it in file
				fwrite(&s[i], sizeof(struct student), 1, fp);
				}
				printf("\nData Saved Successfully");
				fclose(fp);
			break;

		case 2: //code to read from student file

				fp = fopen("studentRec","rb");
				if(fp==NULL){
					printf("\nCannot read\n");
					break;
				}
				printf("\n********************************************" );
				printf("\nRecord of students" );
				i =0;
				while(fread(&s[i], sizeof(struct student), 1,fp)){
				printf("\n%d. Name of the student: ",i+1);
				puts(s[i].name);
				printf("   Enrollment no. of the student: ");
				puts(s[i].enroll);
				printf("   Age of the student: ");
				printf("%d\n",s[i].age);
				i++;
				}
				fclose(fp);
			break;

		case 3: //code to write into faculty file

				fp = fopen("facultyRec","ab");
				if(fp==NULL){
					printf("\nCannot write\n");
					break;
				}
				printf("\nEnter number of faculty :");
				scanf("%d",&n);
				while(getchar() !='\n');
				printf("\n********************************************" );
				for(int i=0; i<n; i++){
				printf("\n%d. Enter Name of the faculty: ",i+1);
				gets(f[i].name);
				printf("   Enter department name of the faculty: ");
				gets(f[i].dname);
				printf("   Enter salary of the faculty: ");
				scanf("%d",&f[i].salary);
				while(getchar() != '\n');

				//putting it in file
				fwrite(&f[i], sizeof(struct faculty), 1, fp);
				}
				printf("\nData Saved Successfully");
				fclose(fp);
			break;

		case 4: //code to read from faculty file

				fp = fopen("facultyRec","rb");
				if(fp==NULL){
					printf("\nCannot read\n");
					break;
				}
				printf("\n********************************************" );
				printf("\nRecord of faculties" );
				i =0;
				while(fread(&f[i], sizeof(struct faculty), 1,fp)){
				printf("\n%d. Name of the faculty: ",i+1);
				puts(f[i].name);
				printf("   Department name of the faculty: ");
				puts(f[i].dname);
				printf("   Salary of the faculty: ");
				printf("%d\n",f[i].salary);
				i++;
				}
				fclose(fp);
			break;

		case 5: //code to write into employee file

				fp = fopen("employeeRec","ab");
				if(fp==NULL){
					printf("\nCannot write\n");
					break;
				}
				printf("\n********************************************" );
				printf("\nEnter number of employee :");
				scanf("%d",&n);
				while(getchar() !='\n');

				for(int i=0; i<n; i++){
				printf("\n%d. Enter Name of the employee: ",i+1);
				gets(e[i].name);
				printf("   Enter Address of the employee: ");
				gets(e[i].addr);

				//putting it in file
				fwrite(&e[i], sizeof(struct employee), 1, fp);
				}
				printf("\nData Saved Successfully");
				fclose(fp);

			break;

		case 6: //code to read from employee file

				fp = fopen("employeeRec","rb");
				if(fp==NULL){
					printf("\nCannot read\n");
					break;
				}
				printf("\n********************************************" );
				printf("\nRecord of employees" );
				i =0;
				while(fread(&e[i], sizeof(struct employee), 1, fp)){
				printf("\n%d. Name of the employee: ",i+1);
				puts(e[i].name);
				printf("   Address of the employee: ");
				puts(e[i].addr);
				i++;				
				}
				fclose(fp);
				
			break;

		case 0: 
				printf("********************************************\n\n" );
			    exit(0);
		default: printf("Enter a valid choice " );
			break;
		}
	}
	return 0;
}



