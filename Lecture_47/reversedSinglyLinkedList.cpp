#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node* next;
		
		Node(int data){
			this->data=data;
			
			
			
			this->next=NULL;
		}
};

void insertAtHead(Node* &head, int d){
	Node* temp= new Node(d);
	temp->next=head;
	head=temp;
}
void reverse1(Node* &head, Node* prev, Node* temp){
	if(temp==NULL){
		head=prev;
		return;
	}
	
	Node* forward=temp->next;
	reverse1(head, temp, forward);
	temp->next=prev;
}
Node* reverse(Node* &head){
	Node* prev=NULL;
	Node* temp=head;
	reverse1(head, prev, temp);
	return head;
//	forward->next=temp;	
//	while(temp!=NULL){		
//		temp->next=prev;
//		prev=temp;
//		temp=forward;
//	}
}

void print(Node* &head){
	Node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}cout<<endl;
}
int main(){
	Node* node1= new Node(50);
	Node* head=node1;
	Node* temp=head;
	Node* prev=NULL;
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 10);
	print(head);
	reverse(head);
	print(head);
//	cout<<head->data<<endl;
	return 0;
}
