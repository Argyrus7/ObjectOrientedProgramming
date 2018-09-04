#include<iostream.h>
#include<conio.h>
class list
  {
    private:
    struct node{
    int data;
    struct node *next;
    };
    node *head, *tail;
    public:
    list()
    {
      head=NULL;
      tail=NULL;
    }
  void createnode()
    {
      int value,size;
      cout<<"Enter number of elements you want in link list: ";
      cin>>size;
      for(int i=0;i<size;i++){
      cout<<"Enter Value: ";
      cin>>value;
      node *temp=new node;
      temp->data=value;
      temp->next=NULL;
      if(head==NULL)
      {
	head=temp;
	tail=temp;
	temp=NULL;
      }
      else
      {
	tail->next=temp;
	tail=temp;
      }
    }}
void display()
  {
    node *temp=new node;
    temp=head;
    while(temp!=NULL)
    {
      cout<<temp->data<<"\t";
      temp=temp->next;
    }
  }
void deletenode()
  {
    int pos;
    cout<<"Enter element to be deleted: ";
    cin>>pos;
    node *current=new node;
    node *previous=new node;
    current=head;
    for(int i=1;i<pos;i++)
    {
      previous=current;
      current=current->next;
    }
    previous->next=current->next;
  }
  };
void main()
{
	clrscr();
	list a;
	a.createnode();
	a.display();
	a.deletenode();
	a.display();
	getch();
}
