#include<iostream>
using namespace std;
class Node
{
public:
          Node* prev;
          int data;
          Node* next;
};
Node* create(int n,Node* head)
{
          Node* temp = new Node;
          temp->data = n;
          temp->next =NULL;
          temp->prev =NULL;
          Node* p = head;
          if(p==NULL)
          {
                    head = temp;
                    return head;
          }
          while(p->next=NULL)
          {
                    p = p->next;
          }
          p->next = temp;
          temp->prev = p;
          return head;
}
void display(Node* head)
{
          while(head!=NULL)
          {
                    cout<<head ->data<<" ";
                    head =head->next;
          }
          cout<<endl;
}
int main()
{
          Node* head = NULL;
          cout<<"1. Create Node"<<endl;
          cout<<"2. Display"<<endl;
          cout<<"3. Exit"<<endl;
          int flag = 1;
          int ch;
          while(flag)
          {
                   cin>>ch;
                   switch(ch)
                   {
                   case 1:
                    int n;
                    cout<<"Enter Element ";
                    cin>>n;
                    head = create(n,head);
                    break;
                   case 2:
                    display(head);
                    break;
                   case 3:
                    exit(1);
                   default :
                    exit(-1);
                   }
          }

}

