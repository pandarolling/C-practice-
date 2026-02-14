#include<stdio.h>

#define IN 0
#define OUT 1

int main(){
int len= 0, state =OUT; //length and state(inside of a word or outside)
int i;          //index variable
char c;			//to take input char by char

char s[30];     //array of char

while((c =getchar()) != EOF){  //taking string input
	s[i] = c;
	i++;
}
	s[i] = '\0';			   //making last value NULL

	i= 0;					   //making index 0

while(s[i] != '\0'){

	if(s[i] == ' ' ||s[i] == '\t' || s[i] == '\n'){   //this block checks if out of a word
		state= OUT;
	}
	else if(state == OUT){	//this block works when something other than a space, \n or \t comes 
		len= 0;				//i.e. when a new word comes-- so 
		state =IN;
	}

	if (state ==IN)			//now after all the changing to IN and OUT...
	{						//if inside a word 							
		++len;
	}
	i++;
}

printf("\nlength : %d",nc);
return 0;
}
