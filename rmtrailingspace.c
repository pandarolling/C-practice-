/*this program takes input of multiple lines
 and then print the line with 80  characters
*/
#include<stdio.h>

#define MAX 1000
int getLine(char str[], int lim);


int main(){
	int i;
	int len;//current line length
	char current [MAX];//current line

	while((len = getLine(current, MAX)) > 0){
		if(len >0){
			printf("%s",current);
		}
		
	}

	return 0;
}
int getLine(char s[], int lim){
	int i=0;
	char c;
	char prev= '\0';
	while(i <lim -1 &&(c= getchar()) !=EOF  ){
		
		
		if(i != 0 && (prev == c )){
		    if(prev == ' ' || prev== '\n')
		   	    continue;
		}

		else if(c == '\t' && prev != ' '){
			s[i] = ' ';
			prev =s[i];
			i++;
		}
		else
		{	s[i] = c;
			prev =s[i] ;
			i++;
		}

	}
	
	s[i] ='\0';

	return i;
}