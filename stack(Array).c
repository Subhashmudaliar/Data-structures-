#include <stdio.h>
#define MAX 100
int stack[MAX],top = -1;
void push(int x){
	if(top == MAX-1){
		printf("Stack overflow\n");
	}else{
		top++;
		stack[top] = x;
	}
}
int pop(){
	if(top == -1){
		printf("Stack underflow\n");
	}else{
		return stack[top--];
	}
}
int top1(){
	int x;
	if(top == -1){
		printf("Stack is empty\n");
	}else{
		x = stack[top];
		return x;
	}
}
void clear(){
top = -1;
}
void display(){
	int i = top;
	if(top == -1){printf("stack empty\n");}
	while(i != -1 ){
		printf("%d\n",stack[i] );
		i--;
	}
}
int main(int argc, char const *argv[])
{
	int x;
	printf("------------Operations---------------\n1.push\n2.pop\n3.top\n4.clear\n5.display\n6.Exit\n");
	int ch;
	do{
	printf("Enter your choice \n");
	scanf("%d",&ch);
	switch(ch){
		case 1:
			printf("Enter the element to be pushed into stack\n");
			scanf("%d",&x);
			push(x);
			break;
		case 2:
			printf("Deleted element is %d\n",pop());
			break;
		case 3:
			printf("The top element is %d\n",top1());
			break;
		case 4:
			clear();
			break;
		case 5:
			display();
			break;
		case 6:
			break;
	}}while(ch != 6);
	return 0;
}
