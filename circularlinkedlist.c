// circularlinkedlist.c

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

struct node *first = NULL;
struct node *last= NULL;

void insert_at_beg(int x)
{
	struct node *temp = (struct node*)malloc(sizeof(struct node));
	temp->data = x;
	if(first == NULL){
		first = temp;
		last = temp;
		last->next = first;
	}else{
		temp->next = first;
		first = temp;
		last->next = first;
	}
	printf("Element inserted\n");

}

void insert_at_end(int x)
{
	struct node *temp = (struct node*)malloc(sizeof(struct node));
	temp->data = x;

	if(first == NULL){
		first = temp;
		last = temp;
		last->next = first;
	}else{
		last -> next = temp;
		last = temp;
		last-> next = first;
	}
	printf("Element inserted\n");
}

void insert_at_pos(int x, int pos)
{
	if(pos == 0){
		printf("Cant insert at 0\n");
		return;
	}

	int length = 0;
	struct node *loc = first;
	if(first != NULL){
		do{
		length++;
		loc = loc->next;
		}while(loc != first);
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
			loc  = first;
			for(int i = 1; i< pos -1; i++){
				loc = loc->next;
			}

			temp->next = loc->next;
			loc->next = temp;
			printf("\nElement inserted");
		}

	}
}

void delete_at_pos(int pos){
	if(pos == 0){
		printf("0 is Not valid position\n");
		return;
	}
	struct node * temp = first;
	int length = 0;
	if(first != NULL){
		do{
		length++;
		temp = temp-> next;
		}while(temp != first);

	}
	
	if(pos >length){
		printf("\nThere is no pos %d", pos);
	}else{
		if(pos == 1){
			delete_at_beg();
		}else if(pos == length){
			delete_at_end();
		}else{
			temp = first;
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
	if(first == NULL){
		printf("Nothing to delete\n");
	}else{
		struct node * temp = first;
		printf("Deleted element = %d\n", temp ->data);
		if(first == last){
			first = NULL;
			last = NULL;
		}else{
			first = first ->next;
			last->next = first;
		}
		free(temp);
	}
}

void delete_at_end()
{	
	if(first == NULL){
		printf("\nNothing to delete");
	}else{
		struct node *temp = last;
		printf("Deleted element %d\n", temp ->data);
		if(first == last){
			first = NULL;
			last = NULL;
		}else{
			struct node *t = first;
			while(t ->next != last){
				t = t->next;
			}
			last = t;
			last->next = first;
		}
		free(temp);
	}
}

void traverse(){
	
	if(first == NULL){
		printf("\nEmpty List ");

	}else{
		struct node * temp = first;
		
		do{
			printf("[%d]->", temp ->data);
			temp = temp ->next;
		}while(temp != first);
		printf("first\n");
	}

}

int main(){

	int ch, x, pos;	
	do{
		printf("\n*******************************");
		printf("\nEnter 0 to exit");
		printf("\nEnter 1 to Insert at beginning");
		printf("\nEnter 2 to Insert at end");
		printf("\nEnter 3 to Insert at pos");
		printf("\nEnter 4 to Delete at beginning");
		printf("\nEnter 5 to Delete at end");
		printf("\nEnter 6 to Delete at pos");
		printf("\nEnter 7 to traverse\n:");
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