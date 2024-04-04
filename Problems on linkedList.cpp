
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
    }else{
        temp->next=head;
        head=temp;
    }
}

//Write a program to find the length of a singly linked list.

int getLength(Node* &head){
    Node* temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}

// Write a program to find the middle element of a singly linked list in one pass.

Node* FindMiddleElement(Node* &head){
    if(head==NULL){
        return NULL;
    }
    int len=getLength(head);
    
    int pos=(1+len)/2;
    int cnt=1;
    Node* curr=head;
    while(cnt!=pos){
        cnt++;
        curr=curr->next;
    }
    
    return curr;
}
//Write a program to find the fourth node from the end in a singly linked list.
Node* findFourthNode(Node* &head){
	int len=getLength(head);
	if(len<4){
		return NULL;
	}
	int pos=len+1-4;
	int count=1;
	Node* curr=head;
	while(count!=pos){
		count++;
		curr=curr->next;
	}
	return curr;
}
void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
}

int main() {
    
    Node* node1 = new Node(50);
    Node* head=node1;
    insertAtHead(head, 40);
    insertAtHead(head, 30);
    insertAtHead(head, 20);
    insertAtHead(head, 10);
    print(head);
    Node* temp =FindMiddleElement(head);
    cout<<temp->data<<endl;
    temp=findFourthNode(head);
    cout<<temp->data<<endl;
    
    return 0;
}
