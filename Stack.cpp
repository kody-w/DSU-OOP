#include "Stack.h"
#include <iostream>
using namespace std;

Node::Node()
{
	data = 0;
	next = NULL;
	
}

void Node::setData(int d){
	
	data = d;
}

int Node::getData(){
	
	return data;
}

void Node::setNext(Node* n){
	
	next = n;
}

Node* Node::getNext(){
	
	return next;
}

Stack::Stack(){

	top = NULL;

}

void Stack::push(int d){
	
	Node* newNode = new Node;

	newNode->setData(d);
	
	newNode->setNext(top);
	
	top = newNode;
	
	
}
int Stack::pop(){
	
	int popThisData;

	
	if (top == NULL){
		
		
		printf("The Stack is empty.\n");
		delete top;
		
		
	}else if(top->getNext() == NULL){
		
		printf("Last number in the stack.\n");
		popThisData = top->getData();
		delete top;
		top = NULL;
		return popThisData;
		
	}else if(top->getNext()!= NULL){
		Node* temp = top->getNext()
		popThisData = top->getData();
		delete top;
		top = temp;
		return popThisData;
	}
	
	
}
void Stack::printStack(){
	
	Node* current = top;
	
	cout << "top --> bottom\n";
	while(current != NULL){
		
		cout << current->getData() << "\t";
		current = current->getNext();
	}
	
	delete current;
	
}
