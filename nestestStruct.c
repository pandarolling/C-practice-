#include<stdio.h>

struct Person{

char name[50];
int phone;
	struct address{
		int house_no;
		char area[50];
		char city[50];
		char state[50];
		int pincode;
	}a;
}p;

int main(){
	printf("\nEnter details of the person");
	printf("\n\n\nEnter name");
	gets(p.name);

	printf("\nEnter phone");
	scanf("%d",&p.phone);
	while (getchar() != '\n');

	printf("\nEnter house no.");
	scanf("%d",&p.a.house_no);
	while (getchar() != '\n');

	printf("\nEnter area");
	gets(p.a.area);

	printf("\nEnter city");
	gets(p.a.city);

	printf("\nEnter state");
	gets(p.a.state);

	printf("\nEnter pincode");
	scanf("%d", &p.a.pincode);



	printf("\n\n ALl info of the person");

	
	return 0;

}