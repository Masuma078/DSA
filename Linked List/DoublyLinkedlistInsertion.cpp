#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node *prev;
};
Node *head=NULL;
void insert(int n)
{
    Node *newNode=new Node;
    newNode->data=n;
    newNode->next=head;
    newNode->prev=NULL;
    if(head!=NULL){
        head->prev=newNode;
    }
    head=newNode;
}
void insertAtEnd(int n)
{
    Node *newNode=new Node;
    newNode->data=n;
    newNode->next=NULL;
    newNode->prev=NULL;
    if(head==NULL){
        head=newNode;
        return;
    }

    Node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->prev=temp;

}
void insertAtPosition(int pos,int n)
{
    Node *newNode=new Node;
    newNode->data=n;
    if(pos==1){
        newNode->next=head;
        newNode->prev=NULL;
        if(head!=NULL){
            head->prev=newNode;
        }
        head=newNode;
        return;
    }
    Node *temp=head;
    for(int i=1 ; i<pos-1 && temp!=NULL ; i++){
        temp=temp->next;
    }
    if(temp==NULL){
        cout<<"Position "<<pos<<" doesnot exist in the list."<<endl;
        return;
    }
    newNode->next=temp->next;
    newNode->prev=temp;
    if(temp->next!=NULL){
        temp->next->prev=newNode;
    }
    temp->next=newNode;
}
void print()
{
    cout<<"Data elements in a Double linked list are : ";
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
    insert(3);
    insert(2);
    insert(1);
    insertAtEnd(7);
    insertAtPosition(4,4);
    print();
    return 0;
}
