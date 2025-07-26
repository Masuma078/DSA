#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    int pass=1;
    while(n>pass){
        for(int i=0 ; i< n-pass ; i++){
            if(a[i]>a[i+1]){
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
        pass++;
    }
    for(int i=0 ; i<n ; i++){
        cout<<a[i]<< " ";
    }
}
