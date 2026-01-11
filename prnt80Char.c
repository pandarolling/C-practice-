/*this program takes input of multiple lines
 and then print the line with 80  characters
*/
#include<stdio.h>

#define MAX 100
int getLine(char str[], int lim);


int main(){
	int i;
	int len;//current line length
	char current [MAX];//current line

	while((len = getLine(current, MAX)) > 0){
		if(len >20){
			printf("%s\n",current);
		}
		
	}

	return 0;
}
int getLine(char str[], int lim){
	int i;
	char c;
	for(i =0 ;i <lim -1 &&(c= getchar()) !=EOF && c!= '\n'; i++ ){
		str[i] =c;
	}
	if(c = '\n' && c != EOF){
		str[i] ='\n';
		i++;
	}
	str[i] ='\0';

	return i;
}