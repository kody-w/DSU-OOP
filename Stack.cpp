#include "Stack.h"
#include <iostream>
using namespace std;

int Node::nodeCount = 0; 

Node::Node()
{
	data = 0;
	next = NULL;
}

void Node::operator=(const Node &ref){
	
	this->data = ref.data;
	this->next = NULL;
}
	
Node Node::operator+(const Node &ref){
	Node n;
	n.setData(this->data + ref.data);
	return n;
}

Node Node::operator-(const Node &ref){
	Node n;		
	n.setData(this->data - ref.data);			
	return n;
}
	
Node Node::operator*(const Node &ref){
	Node n;		
	n.setData(this->data * ref.data);		
	return n;
}
	
Node Node::operator/(const Node &ref){
	Node n;		
	n.setData(this->data / ref.data);			
	return n;
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

void Stack::operator=(const Stack &ref){
	
	Node* current = ref.top;
	Node* previous = NULL;
	Node* newNode = new Node; 
	newNode->setData(current->getData());
	newNode->setNext(NULL);
	previous = newNode;
	this->top = newNode;
	current = current->getNext();
	
	
	//this->top = ref.top;
	
	Stack s;
		
	while(current != NULL){
		
		newNode = new Node; 
		newNode->setData(current->getData());
		newNode->setNext(NULL);
		previous->setNext(newNode);
		previous = newNode;
		current = current->getNext();
		
		/*
		cout << current->getData() << "\t";
		s.push(current->getData());
		
		cout << "IN COPYING\n\n";
		
		current = current->getNext();
		
		*/
		
	}
	
	
}

Stack Stack::operator+(const Stack& ref){

	Stack s;
	
	s.top = ref.top;
	
	Node* current = s.top;
	while(current->getNext() != NULL){
		
		current = current->getNext();
		
	}
	
	current->setNext(this->top);

	
	return s;

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


