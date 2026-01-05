#include<stdio.h>
int main(){
int i, j, n, prnt;

printf("enter a num");
scanf("%d",&n);

for(i =1; i<=n; i++){
    prnt =n;
  for(j=1 ; j<=i; j++){
  printf("%d",prnt);
  prnt--;

  }
printf("\n");
}



return 0;
}
