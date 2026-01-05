#include<stdio.h>
int main(){
int rev= 0, n;
printf("enter a number");
scanf("%d",&n);

while(n != 0 ){
        rev *= 10;
        rev+= (n%10);
        n /= 10;
    }

printf("reverse of digits is %d", rev);
return 0;
}
