#include<iostream>
using namespace std;
int prime_check(int num,int i)
{
    if(num<=1)return 0;
    if(i==num)return 1;
    if(num%i==0)return 0;
    return (num,i+1);
}
int main()
{
    int num,i=2;
    cout<<"Enter the number : ";
    cin>>num;
    int count=prime_check(num,i);
    if(count==0){
        cout<<"The number is not prime."<<endl;
    }
    else{
        cout<<"The number is prime."<<endl;
    }
    return 0;
}
