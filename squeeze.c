// squeeze.c

#include <stdio.h>


char * squeeze(char str1[], char str2[]){
	int i =0;
	int j;
	while(str1[i] != '\0'){
		j =0;
		while(str2[j] != '\0'){

		if(str1[i] == str2[j] ){
			int k =j;
			while(str2[k] != '\0'){
				str2[k] = str2[k+1];
				k++; 
				}
			}
			j++;
		}
		i++;
	}


	return str2;
}
int main(){


	char str1[30];

	char str2[30];
	gets(str1);
	gets(str2);

	char *str3 = squeeze(str1, str2);
	puts(str3);
	return 0;

}