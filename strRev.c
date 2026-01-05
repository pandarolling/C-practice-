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
	char a[50];

	char *b;

	printf("\n Enter any string :");
	gets(a);

	strrev(a);

	printf("\n Reversed string is :%s\n", a);
	
	printf("\n original string is :%s\n", a);

	return 0;

}