/*this program takes input of multiple lines
 and then print the longest line
*/
#include<stdio.h>

#define MAXWORD 100
int getLine(char str[], int lim);
void copy(char from[], char to[]);

int main(){
	int i;
	int len;//current line length
	int max; //length of the longest line
	char longest [MAXWORD];//longest line
	char current [MAXWORD];//current line
	max =0;

	while((len = getLine(current, MAXWORD)) > 0){
		if(len >max){
			max =len;
			copy(current,longest);
		}
		
	}if(max>0)
		printf("Longest String = %s",longest);
	
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

void copy(char from[], char to[]){
	int i =0;
	while((to[i] = from[i]) != '\0')
		i++;
}