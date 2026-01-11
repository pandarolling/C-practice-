#include<stdio.h>
#include<stdbool.h>

bool isPalindrome(int x){
 int rev =0;
 unsigned int num = x;
 while(num != 0){
 rev *=10;
 rev += num%10;
 num /= 10;

 }
 if (rev ==x)
	return true;
 else
	return false;
}
int main(){
int num;
printf("\nEnter a number ");
scanf("%d",&num);

if(isPalindrome(num))
  printf("\nPalindrome");
else
  printf("\nNot palindrome");

return 0;
}
