#include<stdio.h>
int main(){

int i, n, flag =0;
printf("enetr a num");
scanf("%d",&n);

if(n<=1)
{
    printf("not prime");
    return 0;
}

for(i=2 ; i<=n/2; i++){
if(n%i ==0){
flag++;
break;
}

}
if(flag==0){
printf("Prime");
}else
printf("Not prime");




return 0;
}
