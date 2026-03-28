// limits2.c



#include<stdio.h>
#include<limits.h>

int main(){


    unsigned char uc = 0;
    unsigned int ui = 0;
   


    uc = ~uc;
    ui = ~ui;
    printf("Unsigned char max = %u\n", uc);
    printf("Signed char max = %d\n", uc >> 1);
    printf("Signed char min = %d\n", -(uc >> 1) - 1);
	printf("Unsigned char max = %u\n\a", ui);
    printf("Signed char max = %d\n", ui >> 1);
    printf("Signed char min = %d\n", -(ui >> 1) - 1);

   

	return 0;
}