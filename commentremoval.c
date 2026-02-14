#include<stdio.h>

int getLine(char s[]){
	int i= 0;
	char c, prev;
	int inString =0;

	while((c = getchar()) != EOF){
	  if(inString){
	  	prev = s[i] = c;
		i++;
		if(c =='\"'){
			inString= 0;
			continue;
		}
	  }
	  else{
	  	if(c =='/' && prev == c){
			i--;
			continue;
		}
		prev = s[i] = c;
		i++;

		if(c =='\"'){
			inString= 1;
			continue;
		}

	  }
	}
		s[i]=='\0';
	return i;
}
int main(){
	int i ,len;
	char s[2000];

	while((len= getLine(s) )> 0){
		printf("%s",s);
	}




	return 0;
}