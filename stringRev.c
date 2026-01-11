/*to reverse a string
*/


#include<stdio.h>

#define MAX 500
int getLine(char s[], int lim);
void reverse(char s[], int lim);

int main(){
	int i;
	int len;//current line length
	char s[MAX];//current line

	while((len = getLine(s, MAX)) > 0){
		if(len >0){
			reverse(s, len);
			printf("%s\n",s);
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
void reverse(char s[], int len){
	
	for(int i = 0, j= len-1; i< j; i++, j--){
		
		char temp =s[i];
		s[i] = s[j];
		s[j] = temp;

	}
}