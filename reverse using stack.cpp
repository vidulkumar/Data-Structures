/*

Reversing an array using stack

*/

#include <iostream>
using namespace std;
#include <stack>

stack<int>myStack;

void input(int elements){
	
	int item;
	cout<<"Enter element ["<<elements<<"] : ";
	cin>>item;
	myStack.push(item);
	
	}
	
void reverse(){
	
	cout<<myStack.top()<<"\n";
	myStack.pop();
	
	}
	
int main(){
	

	int elements;
	cout<< "Enter No of Elements to add : ";
	cin>>elements;
	
	for(int i=1;i<=elements;i++){
		
		input(i);
	}
	
	cout<<"Popping out elements from the stack...\n";
	
	while(!myStack.empty()){
		
		reverse();
	}
	
	
	
	
}
