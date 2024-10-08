// case - 1 ---> At specific position

// #include<iostream>
// using namespace std;
// int main(){
//     int a[5], size=5, i, key, pos;;
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
//     cout<<"Enter the position: ";
//     cin>>pos;
//     for(i=pos-1;i<size-1;i++)
//     {
//         a[i] = a[i+1];
//     }
//     size--;
//     cout<<"Array after deletion: ";
//     for(i=0;i<size;i++)
//     {
//         cout<<"\t"<<a[i];
//     }
// } 

// case - 2 ---> First Element

// #include<iostream>
// using namespace std;
// int main(){
//     int a[5], size=5, i;
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
    
//     for(i=0;i<size-1;i++)
//     {
//         a[i] = a[i+1];
//     }
//     size--;
//     cout<<"\nArray after deletion: ";
//     for(i=0;i<size;i++)
//     {
//         cout<<"\t"<<a[i];
//     }
// } 

// case - 3 ---> Last element

// #include<iostream>
// using namespace std;
// int main(){
//     int a[5], size=5, i;
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
//     size--;
//     cout<<"\nArray after deletion: ";
//     for(i=0;i<size;i++)
//     {
//         cout<<"\t"<<a[i];
//     }
// } 

// case - 4 ---> Interesting case ---> deletion by given element, rather by position ---> 
// LOGIC BY OWN

// #include<iostream>
// using namespace std;
// int main(){
//     int a[5], size=5, i, index, key;
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
//     cout<<"\nEnter the key: ";
//     cin>>key;
//     for(i=0;i<size;i++)
//     {
//         if(a[i] == key)
//         {
//             index = i;
//             for(i=index;i<size-1;i++)
//             {
//                 a[i] = a[i+1];
//             }
//         }
//     }
//     size--;
//     cout<<"Elements after deletion: ";
//     for(i=0;i<size;i++)
//     {
//         cout<<"\t"<<a[i];
//     }
// } 

// OPTIMIZED CODE

// #include<iostream>
// using namespace std;
// int main(){
//     int a[5], size=5, i, index=-1, key;
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
//     cout<<"\nEnter the key: ";
//     cin>>key;
//     for(i=0;i<size;i++)
//     {
//         if(a[i] == key)
//         {
//             index = i;
//             break;
//         }
//     }
//     if(index!=-1)
//     {
//         for(i=index;i<size-1;i++)
//         {
//             a[i] = a[i+1];
//         }
//         size--;
//     } else {
//         cout<<"\nKey not found";
//     }

    
//     cout<<"Elements after deletion: ";
//     for(i=0;i<size;i++)
//     {
//         cout<<"\t"<<a[i];
//     }
// } 