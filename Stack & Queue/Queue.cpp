#include<iostream>
using namespace std;
#define n 5
int Queue[n],front=-1,rear=-1;
void Enqueue()
{
    if(rear == n-1)
    {
        cout<<"Queue is Full!"<<endl;
    }
    else
    {
        int x;
        cout<<"Enter value you want to insert : ";
        cin>>x;
        if(front==-1)
        {
            front=0;
        }
        rear++;
        Queue[rear]=x;
    }
}
void Dequeue()
{
    if(front==-1 || front > rear)
    {
        cout<<"Queue is Empty!"<<endl;;
    }
    else
    {
        int value=Queue[front];
        cout<<"Deleted value : "<<value<<endl;
        if(front == rear)
        {
            front=-1;
            rear=-1;
        }
        else
        {
            front++;
        }
    }
}
void display()
{
    if(front==-1)
    {
        cout<<"Queue is Empty!"<<endl;
    }
    else
    {
        cout<<"Queue elements are: ";
        for(int i=front ; i<=rear ; i++)
        {
            cout<<Queue[i]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int num;
    while(true)
    {
        cout<<"Press: ";
        cin>>num;
        switch(num)
        {
        case 1:
            Enqueue();
            break;
        case 2:
            Dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            cout<<"Exit program!"<<endl;
            return 0;
        }
    }
    return 0;
}

