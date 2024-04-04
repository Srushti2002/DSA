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
	Node* temp = new Node(d);
	if(head==NULL){
		head=temp;	
	}
	
	else{
		temp->next=head;
		head=temp;
	}
}

void print(Node* &head){
	Node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}

Node* Kreverse(Node* &head, int k){
	//base case
	if(head==NULL){
		return NULL;
	}
	
	int len=0;
	Node* temp=head;
	while(temp!=NULL){
		len++;
		temp=temp->next;
	}
	
	if(k>len){
		return head;
	}
	
	Node* curr=head;
	Node* prev=NULL;
	Node*forward=NULL;
	int count=0;
	while(curr!=NULL && count<k){
		forward=curr->next;
		curr->next=prev;
		prev=curr;
		curr=forward;
		count++;
	}
	if(forward!=NULL){
		head->next= Kreverse(forward, k);
	}
	
	return prev;
}

int main(){
	Node* node1 = new Node(50);
	Node* head=node1;
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 10);
	print(head);
	
	int k=2;
	cout<<endl;  
	head=Kreverse(head, k);
	print(head);
	
	return 0;
}
