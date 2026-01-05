#include<stdio.h>
int main(){
int sum= 0, n;
printf("enter a number");
scanf("%d",&n);

for(int i = 0; ; ){
    if(n<=0){
        break;
    }else
    {
        sum+= (n%10);
        n /= 10;
    }

    }
printf("sum of digits is %d", sum);
return 0;
}
