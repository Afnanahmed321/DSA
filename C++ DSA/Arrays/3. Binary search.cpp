#include<iostream>
using namespace std;
int binarySearch(int a[],int n,int data);
int main(){
    int a[10],n,i,data;
    cout<<"Enter the array size: ";
    cin>>n;
    cout<<"Enter the array elements: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"The Entered elements are: ";
    for(i=0;i<n;i++)
    {
        cout<<"\t"<<a[i];
    }
    cout<<"\nEnter the data to be found: ";
    cin>>data;
    int result=binarySearch(a,n,data);
    if(result!=-1){
        cout<<"Element found at location: "<<result;
    } else {
        cout<<"Element not found";
    }
}
int binarySearch(int a[],int n,int data)
{
    int l=0,h=n-1,mid;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(data==a[mid])
        {
            return mid;
        } else if(data<a[mid]) {
            h=mid-1;
        } else {
            l=mid+1;
        }
    }
    return -1;
}