#include<iostream.h>
#include<stdlib.h>
#include<conio.h>

struct node{
  int data;
  struct node *next;
};

void main(){
  clrscr();
  struct node *cur, *temp, *front;
  int over=1;
  int action;

  front = (struct node *)malloc(sizeof(struct node));
  cout<<"Enter a value: ";
  cin>>front->data;
  cur = front;
  temp = cur;

  while(over!=0){

    cur = (struct node *)malloc(sizeof(struct node));

    cout<<"\nAction(0-stop,1-add, 2-delete): ";
    cin>>action;
    if(action==0){
      over=0;
      temp->next = NULL;
    }
    else if(action==1){
      temp->next = cur;
      cout<<"Enter a value: ";
      cin>>cur->data;
      temp = cur;
    }
    else if(action==2){
      cur = front;
      front = front->next;
      cout<<"Successfully deleted "<<cur->data;
      free(cur);
    }
  }

  cur = front;
  while(cur->next!=NULL){
    cout<<cur->data<<endl;
    cur = cur->next;
  }
  cout<<cur->data<<endl;

  getch();
}
