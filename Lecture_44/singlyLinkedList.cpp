#include<iostream>
#include<map>
using namespace std;

class Node {
	public:
		int data;
		Node* next;
		
		//constructor
		Node(int data) {
			this -> data = data;
			this -> next = NULL;
		}
		
		//destructor
		~Node() {
			int value = this -> data;
			//memory free
			if(this->next != NULL){
				delete next;
				this->next = NULL;
			}
			cout << " memory is free for node with data "<<value<<endl;
		}
};

void insertAtTail(Node* &tail, int d) {
	//new node create
	Node* temp = new Node(d);
	tail -> next = temp;
	tail = temp;
}

void insertAtHead(Node* &head, int d) {
	
	//new node create
	Node* temp = new Node(d);
	temp -> next = head;
	head = temp;
}

void print(Node* &head) {
	Node* temp = head;
	
	while(temp != NULL){
		
		cout<< temp -> data<< " ";
		temp = temp->next;
	}
	cout<<endl;
}

void InsertAtPosition(Node* &tail, Node* & head, int position, int d) {
	
	//insert at Start
	if(position == 1) {
		insertAtHead(head, d);
		return;
	}
	
//	if(len == position-1){
//		insertAtHead(head, d)
//	}
	
	Node* temp = head;
	int cnt = 1;
	
	while(cnt < position-1) {
		temp = temp->next;
		cnt++;
	}
	
	//insertion at last position
	if(temp -> next == NULL){
		insertAtTail(tail, d);
		return;
	}
	
	//creating a node for d
	Node* nodeToInsert = new Node(d);
	
	nodeToInsert -> next = temp -> next;
	
	temp -> next = nodeToInsert;
}

void deleteNode(int position, Node* & head) {
	
	//deleting first or start node
	if(position==1){
		Node* temp = head;
		head = head->next;
		//memory free  start node
		temp-> next =   NULL;
		delete temp;
		
	}else{
		//deleting middle or last node
		Node* curr = head;
		Node* prev = NULL;
		
		int cnt = 1;
		while(cnt < position){
			prev = curr;
			curr = curr->next;
			cnt++;
		
		}
			prev->next = curr->next;
			curr -> next = NULL;
			delete curr;
	}
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
			cout << "Present on element "<<temp->data<<endl;
			return 1;
		}
		visited[temp] = true;
		temp=temp->next;
	}
	return false;
}

int main() {
	//created a new node
	Node* node1 = new Node(10);
	///cout<<node1 -> data <<endl;
	///cout<<node1 -> next <<endl;
	
	//head pointed to node1
	Node* head = node1;
	Node* tail = node1;
	//print(head);
	
	insertAtTail(tail, 12);
	//print(head);
	
	insertAtTail(tail, 15);
	//print(head);
	
	InsertAtPosition(tail, head, 4, 22);
	print(head);
	tail->next=head->next;
//	
	cout<<"head "<<head -> data <<endl;
	cout<<"tail "<<tail -> data <<endl;
	//print(head);
	
	if(detectLoop(head)){
		cout<<"Cycle is present"<<endl;
	}else{
		cout<<"No cycle"<<endl;
	}
//	deleteNode(2, head);
//	print(head);
//	
	return 0;
	
}
