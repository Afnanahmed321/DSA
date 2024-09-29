#include<iostream>
using namespace std;
int main(){
    int a[5],n,i,key,found=0;
    cout<<"Enter the array size: ";
    cin>>n;
    cout<<"Enter the array elements: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Entered elements are: ";
    for(i=0;i<n;i++)
    {
        cout<<"\t"<<a[i];
    }
    cout<<"Enter the element to be found: ";
    cin>>key;
    for(i=0;i<n;i++)
    {
        if(key==a[i])
        {
            cout<<"The Element found at index: "<<i;
            found++;
            break;
        }
    }
    if(found==0)
    {
        cout<<"The element not found";
    }
}