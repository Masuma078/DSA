#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *head=NULL;
void insert(int n)
{
    Node *newNode= new Node;
    newNode -> data =n;
    newNode -> next =head;
    head = newNode;
}
void insertAtPosition(int pos,int n)
{
    Node *newNode =new Node;
    newNode -> data = n;
    if(pos==1){
        newNode ->next=head;
        head=newNode;
    }
    Node *temp=head;
    for(int i=1 ; i<pos-1 && temp!=NULL ; i++){
        temp=temp->next;
    }
    if(temp==NULL){
        cout<<"Invalid Position"<<endl;
    }
    newNode->next=temp->next;
    temp->next=newNode;
}
void insertAtEnd(int n)
{
    Node *newNode=new Node;
    newNode->data=n;
    newNode->next=NULL;
    if(head==NULL){
        head=newNode;
    }
    Node *temp=head;
    while(temp->next !=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
}
void print()
{
    cout<<"Data Elements in a Singly Linked list are : ";
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main()
{
    insert(6);
    insert(5);
    insert(4);
    insert(3);
    insert(2);
    insertAtPosition(4,8);
    insertAtEnd(7);
    insert(1);
    print();
    return 0;
}
