#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#define MAX 20

char stack[MAX];
int top =-1;
char *operatorarray[] = {
	"()",
	"[]",
	"{}",
	"$^",
	"*/%",
	"+-",
	"="
};

void push (char x);
void pop();


int isoperator(char x){
	

	for(int i =0; i < 7; i++ ){
		if(strchr(operatorarray[i], x)){
			return 1;
		}
	}
	return 0;
}

int precedOf(char x){
	for(int i =0; i < 7 ; i++ ){
		if(strchr(operatorarray[i], x)){
			return i;
		}
	}
}

void infixToPostfix(char * infixexpr, char * postfixexpr){
	int i = 0, j=0;
	int len = strlen(infixexpr);
	// printf("%d",len);

	while(i <len){ 
		char charscanned = infixexpr[i];
		// printf("%c\n", charscanned);

		if(charscanned == '('){
			push(charscanned);
		}
		else if(charscanned == ')'){
			while(top > -1 && stack[top] != '('){
				postfixexpr[j] = stack[top];
				j++;
				pop();

			}
			pop();
		}


		else if(isoperator(charscanned)){	

				if(top ==-1 || precedOf(stack[top]) > precedOf(charscanned) ){
					push(charscanned);
				}else{

					while(top > -1 && stack[top] != '(' && precedOf(stack[top]) <= precedOf(charscanned)){
						postfixexpr[j] = stack[top];			//adds operators of higer precedence into postfix
						j++;		
						pop();

					}
					push(charscanned);							//then pushes the charscanned onto the stack			}
				}
			}
			else{//any other character other than operators is added to postfix expression directly
				postfixexpr[j] = charscanned;
				j++;
			}

		i++;
	}

	while(top != -1){
		postfixexpr[j] = stack[top];
		j++;
		pop();
	}

	postfixexpr[j] ='\0';

}
void push(char x){
	if(top == MAX -1){
		fprintf(stderr,"Stack full\n");
	}else{
		top++;
		stack[top] = x;
	}
}

void pop(){
	if(top == -1){
		fprintf(stderr, "Stack already empty\n");

	}else{
		top--;
	}
}

void traverse(){
	if(top == -1){
		fprintf(stderr, "Stack empty \n");

	}else{
		for(int i = 0; i <= top; i++){
			printf("%d ",stack[i]);
		}
		printf("\n");
	}
}

int main(){
	printf("Enter an Infix expression\n");

	char infixexpr[50];

	scanf("%49s", infixexpr);

	char postfixexpr[50];
	infixToPostfix(infixexpr, postfixexpr);

	printf("The postfix expression is : %s\n", postfixexpr);

	return 0;
}