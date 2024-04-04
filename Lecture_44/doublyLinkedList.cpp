#include<iostream>
using namespace std;

class Node {
	public:
		int data;
		Node* prev;
		Node* next;
		
		//constructor
		Node(int d ){
			this -> data = d;
			this -> prev = NULL;
			this -> next = NULL;
		}
		
		~Node(){
			int val = this->data;
			if(next != NULL) {
				delete next;
				next = NULL;
			}
			cout <<"memory free for node with data "<<val<<endl;
		}
};

//traverse the linked list
void print(Node* head) {
	Node* temp = head;
	
	while(temp != NULL) {
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
}

//gives the length
int getLength(Node* head) {
	int len = 0;
	Node* temp = head;
	
	while(temp != NULL) {
		len++;
		temp = temp->next;
	}
	return len;
}

void insertAtHead(Node* &tail, Node* &head, int d) {
	//empty list
	if(head == NULL) {
		Node* temp = new Node(d);
		head = temp;
		tail=temp;
	}else{
		
		
	Node* temp = new Node(d); 
	temp->next=head;
	head->prev=temp;
	head=temp;
	}
}

void insertAtTail(Node* &tail,   Node* &head,  int d) {
	//empty list
	if(head== NULL){
		Node* temp = new Node(d);
		tail = temp;
	}else{
 	Node* temp = new Node(d);
	tail->next=temp;
	temp->prev=tail;
	tail=temp;
		
	}
}

void insertAtPosition(Node* &tail, Node* &head, int pos, int d) {
	//insert at start
	if(pos == 1) {
		insertAtHead(tail, head, d);
		return;
	}
	
	Node* temp = head;
	int cnt = 1;
	
	while(cnt<pos-1) {
		temp = temp->next;
		cnt++;
	}
	
	//insert at tail
	if(temp->next==NULL) {
		insertAtTail(tail, head, d);
		return;
	}
	
	Node* nodeToInsert = new Node(d);
	nodeToInsert->next = temp->next;
	temp->next->prev = nodeToInsert;
	temp->next = nodeToInsert;
	nodeToInsert->prev = temp;
	
}

void deleteNode(int pos, Node* &head) {
	//deleting first or start node
	if(pos == 1) {
		Node* temp = head;
		temp->next->prev = NULL;
		head= head->next;
		
		//memory free start node
		temp->next = NULL;
		delete temp;
	}
	//deleting end or middle node
	else{
		Node* curr = head;
		Node* temp = NULL;
		
		int cnt = 1;
		while(cnt < pos) {
			
			temp = curr;
			curr = curr->next;
			cnt++;
		}
		
			curr->prev = NULL;
			temp->next = curr->next;
			curr->next = NULL;
			delete curr;
	}
}

int main() {
	
	
	
	Node* head = NULL;
	Node* tail = NULL;
	//Node* pos = node1;
	print(head);
	cout<<endl;
	
	cout <<getLength(head)<<endl;
	insertAtHead(tail, head, 11);
	print(head);
	cout<<"head " << head->data<<endl;
	cout<<"tail " <<tail->data<<endl;
	
	insertAtHead(tail, head, 13);
	print(head);
	cout<<"head " << head->data<<endl;
	cout<<"tail " <<tail->data<<endl;
	
	insertAtHead(tail, head, 8);
	print(head);
	cout<<"head " << head->data<<endl;
	cout<<"tail " <<tail->data<<endl;
	
	insertAtTail(tail, head, 21);
	print(head);
	cout<<"head " << head->data<<endl;
	cout<<"tail " <<tail->data<<endl;
	
	insertAtPosition(tail, head, 3, 25);
	print(head);
	cout<<"head " << head->data<<endl;
	cout<<"tail " <<tail->data<<endl;
	
	insertAtPosition(tail, head, 6, 115);
	print(head);
	cout<<"head " << head->data<<endl;
	cout<<"tail " <<tail->data<<endl;
	
	insertAtPosition(tail, head, 1, 101);
	print(head);
	cout<<"head " << head->data<<endl;
	cout<<"tail " <<tail->data<<endl;
	
	
	deleteNode(1, head);
	print(head);
	
	deleteNode(6, head);
	print(head);
	
	deleteNode(3, head);
	print(head);
	
	return 0;
}
