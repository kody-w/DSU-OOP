#ifndef STACK_H
#define STACK_H

class Node {
	
	private:
		int data;
		Node* next;
		static int nodeCount;
			
	public:
	
		void operator=(const Node &ref);
		Node operator+(const Node &ref);
		Node operator-(const Node &ref);
		Node operator*(const Node &ref);
		Node operator/(const Node &ref);
		Node();
		void setData(int d);
		int getData();
		void setNext(Node* n);
		Node* getNext();
		static void incrementCount();
		static void decrementCount();
};

class Stack{

	private:
		Node* top;
		
	public:
		Stack();
		void push(int data);
		int pop();
		void printStack();
		
		void operator=(const Stack &ref);
		
		Stack operator+(const Stack &ref);
		
};

#endif