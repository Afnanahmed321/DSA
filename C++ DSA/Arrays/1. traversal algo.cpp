#include<iostream>
using namespace std;
int main(){
    int a[5],n,i;
    cout<<"Enter the array size: ";
    cin>>n;
    cout<<"Enter the array elements: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"The entered elements are: ";
    for(i=0;i<n;i++)
    {
        cout<<"\t"<<a[i];
    }
    return 0;
}