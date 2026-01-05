#include<stdio.h>
int main(){
int i, k, j, n;
printf("enter a number");
scanf("%d",&n);

for(i=1 ; i<=n; i++){

for(j=1; j<=n-i; j++){
 printf(" ");

  }
for(k =n; k>n-i; k--){
 printf("%d",k);

 }

printf("\n");
}




return 0;
}
