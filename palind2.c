#include<stdio.h>

int main(){

	char a[50];
	int i =0, j=0, flag=0;

	printf("\nEnter a string:\t");
	gets(a);

	//find length
	while(a[j] != '\0'){
		j++;
	}
		j--;

	//checking palindrome
	while(i<j){
		if(a[i] == a[j]){
			i++;
			j--;
		}
		else{
			flag =1;
			break;
		}
	}

	if(flag ==0)
		printf("\nPalindrome");
	else
		printf("\nNot Palindrome");
	
	return 0;

}