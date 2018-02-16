/*

Implementing stack manually

*/

#include <iostream>
using namespace std;

#define MAX 100


class Stack{

	int top;

	public:
		int a[MAX];	

		Stack() {top = -1; }	//Constructor
	 
		bool push(int x);
		int pop();
		bool isEmpty();

};

bool Stack::push(int x){
	
		if (top >= MAX)
		{
			cout << "Overflow";	
			return false;	
		}
		else{
			a[++top] = x;
			return true;
		}
	}

int Stack::pop(){
		
		if(top < 0)
		{
			cout << "Underflow";
			return 0;

		}
		else {	
			int item = a[top--]; 
			return item;
						
		}



	}

bool Stack::isEmpty(){

return (top < 0);

}



int main(){

	Stack s;
	s.push(10);
	s.push(5);
	s.push(6);

	cout << s.pop() << "\n";
	cout << s.pop() << "\n";
	cout << s.pop() << "\n";

return 0;
}
