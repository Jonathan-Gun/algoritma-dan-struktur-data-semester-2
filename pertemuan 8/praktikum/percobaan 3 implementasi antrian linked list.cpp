#include <iostream>
using namespace std;

struct Node {
	int data;
	Node* next;
};

class Queue {
private:
	Node* front;
	Node* rear;
	
public:
	Queue() {
		front = NULL;
		rear = NULL;
	}
	
	void enqueue (int data) {
		Node* new_Node = new Node() ;
		new_Node->data = data;
		new_Node->next = NULL;
		
		if (rear == NULL) {
			front = new_Node;
			rear = new_Node;
			return;
		}
		
		rear->next = new_Node;
		rear = new_Node;
	}
	
	void dequeue() {
		if (front == NULL) {
			cout << "Queue is empty." << endl;
			return;
		}
		
		Node* temp = front;
		front = front->next;
		
		if (front == NULL)
		rear = NULL;
		
		delete temp;
	}
	
	int front_element() {
		if (front == NULL) {
			cout << "Queue is empty." << endl;
			return -1;
		}
		
		return front->data;
	}
	
	bool is_empty() {
		return (front == NULL);
	}
};

int main() {
	Queue q;
	
	q.enqueue(1);
	q.enqueue(4);
	q.enqueue(9);
	
	cout << "Front element is: " << q.front_element() << endl;
	q.dequeue() ;
	cout << "Front element is: " << q.front_element() << endl;
	q.dequeue() ;
	
	return 0;
}

