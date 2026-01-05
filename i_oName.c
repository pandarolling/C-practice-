#include<stdio.h>

int main(){

	char uname[100]; int i, c= 0;

	printf("\nEnter UserName and press Enter!\n");

	for(i = 0; i < 100; i++){

		scanf("%c",&uname[i]);

		if(uname[i] == '\n'){
			break;
		}
		else{
			c++;
		}
	}

	printf("UserName is : ");

	for(i = 0; i<c; i ++){
		printf("%c", uname[i]);
	}


	return 0;
}