#include<stdio.h>
#include<string.h>


char * strCpy(const char* s1, char * s2){
	int temp = strlen(s1);
	int i;
	char tem[temp +1];

	for(i =0; i<temp; i++){
		tem[i] = s1[i];
	}
	tem[i] = '\0';
	s2 = tem;
	return s2;
}
int main(){
	char a[30];
	char * b;
	printf("\nENter a string:\t");
	gets(a);

	char * b = strCpy(a,b);

	printf("\nCopied string:\t%s", b);
	return 0;
}