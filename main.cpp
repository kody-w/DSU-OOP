#include "Stack.h"
#include <iostream>
using namespace std;

int main(){
	
	Stack s;
	
	s.push(1);
	s.printStack();
	s.push(2);
	s.printStack();
	s.push(3);
	s.printStack();
	s.push(4);
	s.printStack();
	s.push(5);
	s.printStack();
	s.push(6);
	s.printStack();
	
	s.pop();
	s.printStack();
	s.pop();
	s.printStack();
	s.pop();
	s.printStack();
	s.pop();
	s.printStack();
	s.pop();
	s.printStack();
	s.pop();
	s.printStack();
	s.pop();
	s.printStack();
	s.pop();
	s.printStack();
	s.pop();
	s.printStack();
	
	s.push(1);
	s.printStack();
	s.push(2);
	s.printStack();
	s.push(3);
	s.printStack();
	s.push(4);
	
	s.pop();
	s.printStack();
	s.pop();
	s.printStack();
	s.pop();
	s.printStack();
	s.pop();
	s.printStack();
	s.pop();
	s.printStack();
	s.pop();
	s.printStack();
	s.pop();
	s.printStack();
	
	
	
	return 0;
}