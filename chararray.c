#include <stdio.h>
	void messsage(char *msg){
	printf("%s\n", msg);

	}
int main(){

	char quote []= {"This is the message"};
	char *msg= quote;
	printf("%s\n", msg);
	// messsage(quote);

	return 0;
}