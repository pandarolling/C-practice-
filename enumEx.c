#include<stdio.h>

enum day {Mon=1, Tue,Wed,Thu,Fri,Sat,Sun};

int main(){

	int i ;

	for(i =1;i<=Sun;i++){
		printf("\n%d",i);
	}

	return 0;
}