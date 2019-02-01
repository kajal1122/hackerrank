#include<iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next=NULL;
};
class list
{
public:
    Node *head=NULL;
    void inserttofront(int x);
    void deletefromfront();
    void inserttoend(int x);
    void deletetoend();
    bool Isempty();
    void print();

};
int main()
{
    list num;

    num.inserttoend(0);
    num.inserttoend(1);
    num.inserttoend(2);
    num.inserttoend(3);
    num.inserttoend(4);
    num.inserttoend(5);
    num.inserttoend(6);
    num.inserttofront(7);
    num.inserttofront(8);
    num.inserttofront(9);
    num.inserttofront(10);
    num.inserttofront(11);
    num.print();
    num.deletefromfront();
    num.print();
    num.deletetoend();

    num.print();
    return 0;
}
void list :: inserttofront(int x)
{
    Node *newnode=new Node();
    newnode->data=x;
    newnode->next=head;
    head=newnode;
}
void list :: inserttoend(int x)
{
    Node *newnode=new Node();
    newnode->data=x;
    if(head == NULL)
    {
        head=newnode;
    }
    else
    {
        Node *temp=head;
       while(temp->next != NULL)
       {
          temp=temp->next;
       }
       temp->next=newnode;


    }


}
void list :: print()
{
    Node *temp=head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void list :: deletefromfront()
{
    Node *temp=head;
    temp=temp->next;
    head=temp;
    delete temp;
}
void list :: deletetoend()
{
    Node *temp=head;
    Node *p=head;
    while(temp->next != NULL)
    {
        p=temp;
        temp=temp->next;
    }
    p->next=NULL;
    delete temp;

}
