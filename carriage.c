#include<stdio.h>
#include<unistd.h>
	
	void hello(){
		char hello [100] = "Hello.....";
		printf("%s",hello);
		// getchar();
	}
	void waiting(){
		char waiting [100] = "waiting...";
		printf("%s", waiting);
		// getchar();
	}

int main(){

	hello();
	fflush(stdout);
	sleep(1);
	printf("\r");

	waiting();
	fflush(stdout);
	sleep(1);
	printf("\r");

	hello();
	fflush(stdout);
	sleep(1);
	printf("\r");

	waiting();
	fflush(stdout);
	sleep(1);
	printf("\r");

	hello();
	fflush(stdout);
	getchar();
}