#include<stdio.h>
int main(){
int i, k, j, n;
printf("enter a number");
scanf("%d",&n);



for(i=1 ; i<= 5; i++)
 {
    for(j=1 ; j<= n-i; j++){
        printf(" ");
        }

    for(k=1 ; k<=i; k++){
        printf("O ");
        }
 printf("\n");
 }

for(i=1 ; i<n; i++){

for(j=1; j<=i; j++){
 printf(" ");
  }

  for(k=1 ; k<=n-i; k++){
    printf("O ");
    }

printf("\n");
}




return 0;
}
