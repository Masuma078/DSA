#include<iostream>
using namespace std;
int sum_of_array(int arr[],int n)
{
    if(n==0)return 0;
    if(n==1)return arr[0];
    return arr[0]+sum_of_array(arr+1,n-1);
}
int main()
{
    int n;
    cout<<"Enter the number of elements : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the number of array elements : ";
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    int sum=sum_of_array(arr,n);
    cout<<"Sum of the number of array elements : "<<sum<<endl;
}
