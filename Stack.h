#ifndef STACK_H
#define STACK_H

class Node {
	private:
		int data;
		Node* next;
		
	public:
		Node();
		void setData(int d);
		int getData();
		void setNext(Node* n);
		Node* getNext();

};

class Stack{

	private:
		Node* top;
		Node* bottom;
		
	public:
		Stack();
		void push(int data);
		int pop();
		void printStack();
};

#endif