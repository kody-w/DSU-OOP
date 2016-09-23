#include "Stack.h"
#include <iostream>
using namespace std;

int Node::nodeCount = 0; 

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

void Node::incrementCount(){
	
	cout << "Nodes current in use in stack:\t" << nodeCount << "\n";
	
	nodeCount++;
}

void Node::decrementCount(){
	
	cout << "Nodes current in use in stack:\t" << nodeCount << "\n";
	
	nodeCount--;
}

Stack::Stack(){

	top = NULL;

}

void Stack::push(int d){
	
	Node* newNode = new Node;
	
	Node::incrementCount();

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
		Node::decrementCount();
		popThisData = top->getData();
		delete top;
		top = NULL;
		return popThisData;
		
	}else if(top->getNext()!= NULL){
		Node::decrementCount();
		Node* temp = top->getNext();
		popThisData = top->getData();
		delete top;
		top = temp;
		return popThisData;
	}
	
	return 0;
}
void Stack::printStack(){
	
	Node* current = top;
	
	cout << "top --> bottom\n";
	//cout << "Node Count: "<<  Node::nodeCount;
	while(current != NULL){
		
		cout << current->getData() << "\t";
		current = current->getNext();
	}
	
	delete current;
	
}


