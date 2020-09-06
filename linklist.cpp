#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node* head;
void Insert(int x){
    Node* temp;
    temp = new Node();
    temp->data = x;
    temp->next = head;
    head = temp;
}
void show()
{
    Node* temp = head;
    cout<<"List is:- ";
    while (temp!= NULL)
    {
        cout<<temp->data;
        temp=temp->next;
    }
    cout<<"\n";
    
}

int main()
{
    head = NULL;
    cout<<"What number do u want to enter? \n";
    int n,x;
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        cout<<"Enter the number:- ";
        cin>>x;
        Insert(x);
        show();
    }
}