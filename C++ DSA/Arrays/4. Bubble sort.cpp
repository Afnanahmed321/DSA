#include<iostream>
using namespace std;
int main(){
    int a[5],n,i,j,temp,flag=0;
    cout<<"Enter the array size: ";
    cin>>n;
    cout<<"Enter the array elements: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Array before sorting: ";
    for(i=0;i<n;i++)
    {
        cout<<"\t"<<a[i];
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag++;
            }
        }
        if(flag==0)
        {
            break;
        }
    }
    cout<<"\nArray after sorting: ";
    for(i=0;i<n;i++)
    {
        cout<<"\t"<<a[i];
    }
}