#include<stdio.h>
#include<stdlib.h>

void insert_at_beg(int x);
void insert_at_end(int x);
void insert_at_pos(int x, int pos);
void delete_at_beg();
void delete_at_end();
void delete_at_pos(int pos);

struct node{
	int data;
	struct node* next;
};

struct node *root = NULL;

void insert_at_beg(int x)
{
	struct node *temp = (struct node*)malloc(sizeof(struct node));
	temp->data = x;
	if(root == NULL){
		temp-> next = NULL;
		root = temp;
	}else{
		temp->next = root;
		root = temp;
	}
}

void insert_at_end(int x)
{
	struct node *temp = (struct node*)malloc(sizeof(struct node));
	temp->data = x;
	temp-> next = NULL;

	struct node *loc = root;

	if(root == NULL){
		root = temp;
	}else{
		while(loc->next != NULL){
			loc = loc-> next;
		}
		loc->next  = temp;
	}
}

void insert_at_pos(int x, int pos)
{
	
	int length = 0;
	struct node *loc = root;

	while(loc != NULL){
		length++;
		loc = loc->next;
	}

	if(pos > length +1 ){
		printf("\nCannot insert at %d", pos);
	}else{
		if(pos == 1){
			insert_at_beg(x);
		}else if(pos == length +1){
			insert_at_end(x);
		}else{
			struct node *temp = (struct node*)malloc(sizeof(struct node));
			temp->data = x;
			loc  = root;
			for(int i = 1; i< pos -1; i++){
				loc = loc->next;
			}

			temp->next = loc->next;
			loc->next = temp;
		}

		printf("\nElement inserted");
	}
}

void delete_at_pos(int pos){
	if(pos == 0){
		printf("Not valid position\n");
		return;
	}
	int length = 0;
	struct node *temp = root;

	while(temp != NULL){
		length++;
		temp = temp-> next;
	}

	if(pos >length){
		printf("\nCannot delete at pos %d", pos);
	}else{
		if(pos == 1){
			delete_at_beg();
		}else if(pos == length){
			delete_at_end();
		}else{
			temp = root;
			for(int i = 1; i < pos-1; i++){
				temp = temp->next;
			}
			struct node *t = temp->next;
			temp->next = t->next;
			printf("\nDeleted element :%d ",t->data);
			free(t);
		}
	}

}

void delete_at_beg()
{

	if(root == NULL){
		printf("\nNo Element to delete");
	}else{
		struct node * temp = root;
		printf("\nElement deleted: %d", temp->data);
		
		root = root->next;
		free(temp);
	}
}

void delete_at_end()
{	
	struct node * temp, *t;

	if(root == NULL){
		printf("\nNo Element to delete");
	}else{
		temp = root;
		if(root ->next == NULL){
			root = NULL;
			printf("\nElement deleted: %d", temp->data);
			free(temp);
		}
		else{
			t= temp->next;
			while(t-> next != NULL){
				t = t->next;
				temp = temp->next;
			}
			temp->next = NULL;
			printf("\nElement deleted: %d", t->data);
			free(t);
		}
		
	}
}

void traverse(){
	
	if(root == NULL){
		printf("\nNo Element to print");

	}else{
		struct node * temp = root;
		while(temp != NULL){
			printf("[%d]->", temp->data);
			temp = temp->next;
		}
		printf("X\n");
	}

}

int main(){

	int ch, x, pos;	
	do{
		printf("\nEnter 0 to exit");
		printf("\nEnter 1 to Insert at beginning");
		printf("\nEnter 2 to Insert at end");
		printf("\nEnter 3 to Insert at pos");
		printf("\nEnter 4 to Delete at beginning");
		printf("\nEnter 5 to Delete at end");
		printf("\nEnter 6 to Delete at pos");
		printf("\nEnter 7 to traverse\n");
		scanf("%d", &ch);
		switch(ch){
		case 0:exit(0);

		case 1:printf("\nEnter a value: ");
			scanf("%d", &x);
			insert_at_beg(x);
			break;

		case 2:printf("\nEnter a value");
			scanf("%d", &x);
			insert_at_end(x);
			break;

		case 3:printf("\nEnter a value");
			scanf("%d", &x);
			printf("\nEnter a position : ");
			scanf("%d", &pos);
			insert_at_pos(x,pos);
			break;

		case 4:delete_at_beg();
			break;

		case 5:delete_at_end();
			break;

		case 6:printf("\nEnter a position : ");
			scanf("%d", &pos);
			delete_at_pos(pos);
			break;

		case 7:traverse();
			break;
			
		default: printf("\nEnter a valid choice");
		}
	}while(1);

	return 0;

}