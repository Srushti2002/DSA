#include<iostream>
#include<map>
using namespace std;

class Node {
	public:
		int data;
		Node* next;
		
		//constructor
	Node(int d) {
		this->data = d;
		this->next = NULL;
	}
	
	~Node() {
		int val = this->data;
		
		if(this->next!=NULL) {
			delete next;
			next = NULL;
		}
		cout << "memory is free for node with data "<<val << endl;
	}
};

void insertNode(Node* &tail, int element, int d){
	//assuming that the element is present in the list
	
	//for empty still consider it
	if(tail== NULL){
		Node* newNode = new Node(d);
		
		tail=newNode;
		newNode->next = newNode;
	}
	else{
		//non empty list
		Node* curr = tail;
		//element jb tk nhi milta age badho bns
		while(curr->data != element){
			curr = curr->next;
		}
		
		//element is found
		
		Node* temp = new Node(d);
		temp->next = curr->next;
		curr->next =  temp ;		
	}
}

void print(Node* &tail) {	

	Node* temp = tail;
			
	if(tail == NULL) {
		cout<<"List is empty " <<endl;
		return;
	}
	
		
	do {
		cout<<tail->data<<" ";
		tail = tail->next;
	}while(tail != temp);
	cout<<endl;
}

void deleteNode(Node* &tail, int value) {
	
	//empty list 
	if(tail == NULL )  {
		cout<<"list is empty please check again"<<endl;
		return;
	}
	else{
		//non empty
		
		//asssuming that "value" is present in the linked list
		Node* prev = tail;
		Node* curr = prev->next;
		
		while(curr->data != value) {
			prev = curr;
			curr = curr->next;
		}
				
		prev->next = curr->next;
		
		//1 Node Linked list
		if(curr == prev) {
			tail = NULL;
		}
		
		//greater than equal to 2
		if(tail == curr) {
			
			tail = prev;
		}		
		curr->next = NULL;
		delete curr;
	}
}

bool isCircularList(Node* head) {
	
	if(head == NULL) {
		return false;
	}
	
	Node *temp=head->next;
	while(temp!=NULL && temp!=head){		
		temp=temp->next;
	}
	
	if(temp == head) {
		return true;
	}
	
	return false;
}

bool detectLoop(Node* head){
	if(head==NULL){
		return false;
	}
	map<Node *, bool> visited;
	
	Node* temp=head;
	
	while(temp!=NULL){
		
		//cycle present
		if(visited[temp]  ==  true){
			return 1;
		}
		visited[temp] = true;
		temp=temp->next;
	}
	return false;
}

int main() {
	//Node* Node1 = new Node(3);
	Node* tail = NULL; 
	
	insertNode(tail, 5, 3);
	print(tail);
	
	insertNode(tail, 3, 5);
	print(tail);
	
	insertNode(tail, 5, 7);
	print(tail);
	
	if(isCircularList(tail)) {
		cout<<" Linked list is Circular in nature"<<endl;
	}else{
		cout<<" Linked List is not circular"<<endl;
	}
//	
//	insertNode(tail, 7, 9);
//	print(tail);
//	
//	insertNode(tail, 9, 10);
//	print(tail);
//	
//	
//	insertNode(tail, 3, 4);
//	print(tail);
//	
//	deleteNode(tail, 3);
//	print(tail);
	
	return 0;	
}


