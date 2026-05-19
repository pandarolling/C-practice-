// dynamicqueue.c

#include <stdlib.h>
#include <stdio.h>

struct node {
	int data;
	struct node *next ;
};

struct node * front = NULL;
struct node * rear = NULL;

void insert(int x);
void delete();
void traverse();

void insert(int x){
	struct node * p = (struct node*)malloc(sizeof(struct node));
	p->data = x;
	p->next = NULL;

	if(rear == NULL){
		front = p;
		rear = p;
	}else{
		rear ->next = p;
		rear = p;
	}
	printf("Element inserted\n");
}

void delete(){
	if(front == NULL){
		printf("Empty\n");
	}else{
		struct node *temp = front;
		printf("deleted element [%d]", temp ->data);
		if(front == rear){
			front = NULL;
			rear = NULL;
		}else{
			front = front-> next;
		}
		free(temp);
	}
}

void traverse(){
	if(front == NULL){
		printf("Empty\n");
	}else{
		struct node * temp = front;
		while(temp != NULL){
			printf("[%d]", temp->data);
			temp = temp -> next;
		}
	}
}

int main(){

	int ch, x;	
	do{
		printf("\nEnter 0 to exit");
		printf("\nEnter 1 to Insert");
		printf("\nEnter 2 to Delete");
		printf("\nEnter 3 to traverse\n");
		scanf("%d", &ch);
		switch(ch){
		case 0:exit(0);

		case 1:printf("\nEnter a value: ");
			scanf("%d", &x);
			insert(x);
			break;

		case 2:delete();
			break;

		case 3:traverse();
			break;
			
		default: printf("\nEnter a valid choice");
		}
	}while(1);

	return 0;

}