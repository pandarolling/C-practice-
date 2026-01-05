#include<stdio.h>

#define IN 0
#define OUT 1

int main(){
int nl, nw, nc,c, state;

nl =nw= nc =0;
state = OUT;
while((c=getchar()) != EOF){
	++nc;
	if(c =='\n')
		++nl;
	if(c ==' ' || c== '\t' || c== '\n')
		state =OUT;
	else if(state == OUT){
		state =IN;
		++nw;
	}
}
	 

printf("Character = %d\n",nc);
printf("Words = %d\n",nw);
printf("Lines = %d\n",nl);

return 0;
}