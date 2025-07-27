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
void NodeCount()
{
    Node *temp=head;
    int count=0;
    cout<<"Elements in a Singly linked list are : ";
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
        count++;
    }
    cout<<endl<<"Total number of Nodes : "<<count<<endl;
}
int main()
{
    insert(5);
    insert(4);
    insert(3);
    insert(2);
    insert(1);
    NodeCount();
    return 0;
}
