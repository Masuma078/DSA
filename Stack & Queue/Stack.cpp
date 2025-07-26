#include<iostream>
using namespace std;
#define n 5
int stack[n],top=-1;
void push()
{
    if(top==n-1){
        cout<<"Stack is Overflow!"<<endl;
    }
    else{
        int x;
        cout<<"Enter the value you want to insert : ";
        cin>>x;
        top++;
        stack[top]=x;
    }
}
void pop()
{
    if(top==-1){
        cout<<"Stack is Underflow!"<<endl;
    }
    else{
        int value=stack[top];
        cout<<"The popped element is : "<<value<<endl;
        top--;
    }
}
void display()
{
    if(top>=0){
        cout<<"Stack elements are : "<<endl;
        for(int i=top ; i>=0 ; i--)
            cout<<stack[i]<<endl;
    }
    else{
        cout<<"Stack is Underflow!"<<endl;
    }
}
int main()
{
    int num;
    while(true){
        cout<<"Press : ";
        cin>>num;
        switch(num)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
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
