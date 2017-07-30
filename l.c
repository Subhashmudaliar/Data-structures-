#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node* next;
}l;
l *head = NULL ,*current;
void insert_at_beg(int x){
	l *newnode = (l*)malloc(sizeof(l));
	newnode->data = x;
	newnode->next = head;
	head = newnode;
}
void end(int x){
	l *ptr,*newnode;
	newnode = (l*)malloc(sizeof(l));
	newnode->data = x;
	ptr = head;
	newnode->next = NULL;
	while(ptr->next != NULL){
		ptr = ptr->next;
	}
	ptr->next = newnode;
}
void ins_any(int num,int pos){
int i = pos-2;
l *ptr,*newnode;
ptr = head;
newnode = (l*)malloc(sizeof(l));
newnode->data = num;
while(i--){
ptr = ptr->next;
}
newnode->next = ptr->next;
ptr->next = newnode;
}
void delete(int x){
	l *ptr,*newnode;
	newnode = (l*)malloc(sizeof(l));
	while(ptr->data != x){
		ptr=ptr->next;
	}
}
void display(){
	l *ptr ;
	ptr = head;
	while(ptr != NULL){
		printf("%d\n",ptr->data);
		ptr = ptr->next;
	}
}
int main(){
	int t  =5;
		while(t--){
			insert_at_beg(1);
		}
	ins_any(6,2);
	end(2);
	display();
	return 0;
}
