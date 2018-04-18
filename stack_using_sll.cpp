#include <iostream>
using namespace std;

struct node{
	
	int data;
	node* next;
	
} *top = NULL;

void push(int element){
	
	node* newnode = new node;
	newnode->data = element;
	newnode->next = top;
	top = newnode;

}

void pop(){
	
	if(top == NULL)return;
	node* temp = top;
	temp= top;
	top = temp->next;
	delete temp;
	
}

void print(){
	node* temp = top;
	
	while(temp!=NULL ){
		
		cout<<" "<<temp->data;
		temp = temp->next;
	}
	
	cout<<"\n";	
}

/*
TODO

int top();
bool isEmpty();

*/

int main(){
	
	push(2);
	push(3);
	push(4);
	push(5);
	print();
	pop();
	pop();
	print();
	
	return 0;
}
