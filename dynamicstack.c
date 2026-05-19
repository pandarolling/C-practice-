// dynamicstack.c
#include <stdlib.h>
#include <stdio.h>

struct node {
	int data;
	struct node *next ;
};

struct node * root = NULL;
struct node * top = NULL;

void push(int x);
void push();
void traverse();

void push(int x){
	struct node * p = (struct node* )malloc(sizeof(struct node));
	p->data = x;
	p->next = NULL;

	if(top == NULL){
		root = p;
		top = p;
	}else{
		top->next = p;
		top = p;
	}
	printf("Element inserted\n");
}
void pop(){
	if(top == NULL){
		printf("empty stack\n");
	}else{
		printf("Deleted Element : %d\n", top->data);
		struct node * temp = top;
		if(root == top){
			root = NULL;
			top = NULL;
		}else{
			struct node *loc = root;
			while(loc -> next != top)
				loc = loc->next;
			top = loc;
			top->next = NULL;
		}
		free(temp);
	}
}

void traverse(){
	if(top == NULL){
		printf("Empty\n");
	}else{
		struct node *temp = root;
		while(temp != NULL){
			printf("[%d]\n",temp->data );
			temp = temp->next;
		}
	}
}

int main(){

	int ch, x;	
	do{
		printf("\nEnter 0 to exit");
		printf("\nEnter 1 to Push");
		printf("\nEnter 2 to Pop");
		printf("\nEnter 3 to traverse\n");
		scanf("%d", &ch);
		switch(ch){
		case 0:exit(0);

		case 1:printf("\nEnter a value: ");
			scanf("%d", &x);
			push(x);
			break;

		case 2:pop();
			break;

		case 3:traverse();
			break;
			
		default: printf("\nEnter a valid choice");
		}
	}while(1);

	return 0;

}