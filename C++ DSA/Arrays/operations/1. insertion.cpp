// <--- Insertion at specific position --->

/* #include<iostream>
using namespace std;
int main(){
    int a[5], size=5, i, key, pos;
    cout<<"Enter the array elements: ";
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
    cout<<"Entered Elements are: ";
    for(i=0;i<size;i++)
    {
        cout<<"\t"<<a[i];
    }
    cout<<"Enter the key element: ";
    cin>>key;
    cout<<"Enter the position: ";
    cin>>pos;
    for(i=size-1;i>=pos-1;i--)
    {
        a[i+1] = a[i];
    }
    a[pos-1] = key;
    size++;
    cout<<"Array after insertion: ";
    for(i=0;i<size;i++)
    {
        cout<<"\t"<<a[i];
    }
} */

//  <--- Insertion at any position --->
// case - 1 ---> At beginning

// #include<iostream>
// using namespace std;
// int main(){
//     int a[5], size=5, i, key;
//     cout<<"Enter the array elements: ";
//     for(i=0;i<size;i++)
//     {
//         cin>>a[i];
//     }
//     cout<<"Entered Elements are: ";
//     for(i=0;i<size;i++)
//     {
//         cout<<"\t"<<a[i];
//     }
//     cout<<"Enter the key element: ";
//     cin>>key;
//     for(i=size-1;i>=0;i--)
//     {
//         a[i+1] = a[i];
//     }
//     a[0] = key;
//     size++;
//     cout<<"Array after insertion: ";
//     for(i=0;i<size;i++)
//     {
//         cout<<"\t"<<a[i];
//     }
// } 

// case - 2 ---> At the end

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a[5], size=5, i, key;
//     cout<<"Enter the array elements: ";
//     for(i=0;i<size;i++)
//     {
//         cin>>a[i];
//     }
//     cout<<"Entered Elements are: ";
//     for(i=0;i<size;i++)
//     {
//         cout<<"\t"<<a[i];
//     }
//     cout<<"Enter the key element: ";
//     cin>>key;
//     a[size] = a[i];
//     size++;
//     cout<<"Array after insertion: ";
//     for(i=0;i<size;i++)
//     {
//         cout<<"\t"<<a[i];
//     }
// }