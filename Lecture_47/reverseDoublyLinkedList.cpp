#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* prev;
		Node* next;
		
		Node(int data){
			this->data=data;
			this->next=NULL;
			this->prev=NULL;
		}
};
void insertAtHead(Node* &head, int d){
	
	Node* temp = new Node(d);
	temp->next=head;
	head->prev=temp;
	head=temp;
	
}

void print(Node* &head){
	Node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}cout<<endl;
}

Node* reverse(Node* &head){
	Node* temp=head;
	Node* forward=NULL;
	Node* curr=NULL;
	while(temp!=NULL) {
		Node* forward=temp->next;
		temp->next=curr;
		temp->prev=forward;
		curr=temp;
		temp=forward;
	}
	
	head=curr;
	return curr;
}

int main(){
	
	Node* node1=new Node(50);
	Node* head=node1;
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 10);
	print(head);
	cout<<head->data<<endl;
	reverse(head);
	print(head);
	cout<<head->data<<endl;
	return 0;
}
