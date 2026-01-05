#include<stdio.h>
#include<string.h>

char* strrev(char *s){
	int i=0;
	int j = strlen(s) -1;
	
	char temp;

	while(i < j){
	temp = s[i];
	s[i] = s[j];
	s[j] = temp;

	i++;
	j--;
	}

	return s;
}
int main(){
	char a[]="yoloy";
	char b[30];
	char *temp;
	int x;

	strcpy(b,a);
	strrev(a);
	

	//swapping a and b 
	temp = *a;
	*a = *b;
	*b = temp;

	x = strcmp(a,b);
	if(x==0)
		printf("\nPalindrome");
	else
		printf("\n not Palindrome");

	return 0;
}