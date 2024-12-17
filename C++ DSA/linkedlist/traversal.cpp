#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node *next;
};
int main(){
    struct Node *head, *newNode, *temp;
    int choice = 1;
    head = 0;
    while(choice){
        newNode = new Node;
        cout<<"Enter the element: ";
        cin>>newNode->data;
        newNode->next = 0;
        if(head == 0){
            head = temp = newNode;
        }
        else{
            temp->next = newNode;
            temp = newNode;
        }
        cout<<"Do you want to continue(0/1): ";
        cin>>choice;
    }
    
    temp = head;
    while(temp!=0){
        cout<<" "<<temp->data;
        temp = temp->next;
    }
}