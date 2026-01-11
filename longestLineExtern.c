/*this program takes input of multiple lines
 and then print the longest line
*/
#include<stdio.h>

#define MAXWORD 100
char longest [MAXWORD];
char line [MAXWORD];
int getLine(void);
void copy(void);

int main(){

	int len;//current line length
	int max; //length of the longest line
	extern char longest [];//longest line
	max =0;

	while((len = getLine()) > 0){
		if(len >max){
			max =len;
			copy();
		}
	if(max>0)
		printf("%s",longest);
	
		
	}
	return 0;
}
int getLine(){
	int i;
	char c;
	extern char line[];
	for(i =0 ;i <MAXWORD -1 &&(c= getchar()) !=EOF && c!= '\n'; i++ ){
		line[i] =c;
	}
	if(c = '\n' && c != EOF){
		line[i] ='\n';
		i++;
	}
	line[i] ='\0';

	return i;
}

void copy(){
	int i =0;
	extern char longest[], line[];
	while((longest[i] = line[i]) != '\0')
		i++;
}