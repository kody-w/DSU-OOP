#include "Stack.h"
#include <iostream>
using namespace std;


int main(){
	
	Stack s;
	
	
	//cout << "The number of nodes is:" << Node::nodeCount << "\n";
	
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
	//cout << "The number of nodes is:" << Node::nodeCount << "\n";
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
	//cout << "The number of nodes is:" << Node::nodeCount << "\n";
	s.push(1);
	s.printStack();
	s.push(2);
	s.printStack();
	s.push(3);
	s.printStack();
	s.push(4);
	//cout << "The number of nodes is:" << Node::nodeCount << "\n";
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
	//cout << "The number of nodes is:" << Node::nodeCount << "\n";
	
	
	return 0;
}