#include<stdio.h>
#include<string.h>


char * strCat(const char* s1, const char* s2, const char * s){
	
	char *s3 = s;

	int idx= 0;//for the s3 string
	int j = 0;//will be used for both s1 and s2
	while(s1[j] !='\0'){
		s3[idx] = s1[j];
		idx++;
		j++;
	}

	j = 0;//using for s2
	while(s2[j] !='\0'){
		s3[idx] = s2[j];
		idx++;
		j++;
	}
	s3[idx] = '\0';
	return s3;
}
int main(){
	char a[100];
	char b[50];
	int temp = strlen(a) + strlen(b) + 1;
	char c[temp];

	printf("\n ENter a string : ");
	gets(a);
	printf("\n Enter another string :");
	gets(b);

	strCat(a, b, c);

	printf("\nConcatenated string is : %s ", c);
	
	return 0;

}