#include<iostream.h>
#include<stdlib.h>
#include<conio.h>

#define ERR_404 "\nValue not found!\n"

struct node *start, *end, *search;

struct node{
  int data;
  struct node *next,*prev;
};

void show(){
  struct node* temp = start;
  while(temp->next!=NULL){
    cout<<temp->data<<", ";
    temp = temp->next;
  }
  cout<<temp->data<<endl<<endl;
}

void getData(int n){
  struct node *temp, *newNode;
  start = (struct node *)malloc(sizeof(struct node));
  cout<<"Enter a value: ";
  cin>>start->data;
  start->prev=NULL;
  temp=start;
  for(int i=0;i<n-1;i++){
     newNode = (struct node*)malloc(sizeof(struct node));
     cout<<"Enter a value: ";
     cin>>newNode->data;
     // Config
     temp->next=newNode;
     newNode->prev=temp;
     temp=newNode;
  }
  temp->next=NULL;
  end=temp;
}

struct node* getSearch(char *action){
  struct node* temp=start;
  int search;
  cout<<"Enter a value to "<<action<<": ";
  cin>>search;
  while(temp->next!=NULL){
     if(temp->data==search){
       return temp;
     }
     temp=temp->next;
  }
  if(temp->data==search){
     return temp;
  }
  return NULL;
}

void deleteNode(struct node *target){
   // Target is in-between
   if(target->next!=NULL&&target->prev!=NULL){
     (target->prev)->next=target->next;
     (target->next)->prev=target->prev;
     free(target);
   }
   // Target is last element
   else if(target->next==NULL){
     (target->prev)->next=NULL;
     *target=*target->prev;
   }
   // Target is first element
   else{
     (target->next)->prev=NULL;
     *target=*target->next;
   }

}

// Insertion Functions
void insertAtStart(){
    struct node *newNode = (struct node *)malloc(sizeof(struct node));

    cout<<"Enter a value to insert at start: ";
    cin>>newNode->data;

    // Linking
    newNode->next=start;
    newNode->prev=NULL;
    start->prev=newNode;

    start=newNode;
}
void insertAtEnd(){
    struct node *newNode = (struct node *)malloc(sizeof(struct node));

    cout<<"Enter a value to insert at end: ";
    cin>>newNode->data;

    // Linking
    newNode->next=NULL;
    newNode->prev=end;
    end->next=newNode;

    end=newNode;
}
void insertBefore(struct node *search){
    struct node *newNode = (struct node *)malloc(sizeof(struct node));

    cout<<"Enter a value to insert before "<<search->data<<": ";
    cin>>newNode->data;

    // Linking
    newNode->next=search;
    newNode->prev=search->prev;
    if(search->prev==NULL){
      start=newNode;
    }else{
      (search->prev)->next=newNode;
    }
    search->prev=newNode;
}

void insertAfter(struct node *search){
    struct node *newNode = (struct node *)malloc(sizeof(struct node));

    cout<<"Enter a value to insert after "<<search->data<<": ";
    cin>>newNode->data;

    // Linking
    newNode->prev=search;
    newNode->next=search->next;
    if(search->next==NULL){
      end=newNode;
    }else{
      (search->next)->prev=newNode;
    }
    search->next=newNode;
}

void main(){
  clrscr();

  // Getting user input for LinkedList
  getData(5);

  // Insertion at start
  insertAtStart();

  // Insertion at end
  insertAtEnd();

  show(); // Printing LinkedList

  // Deleting given node
  search = getSearch("delete");
  if(search!=NULL){
    deleteNode(search);
    show();
  }
  else
    cout<<ERR_404;

  // Insertion before given node
  search = getSearch("insert before it");
  if(search!=NULL){
    insertBefore(search);
    show();
  }else
    cout<<ERR_404;

  // Insertion after given node
  search = getSearch("insert after it");
  if(search!=NULL){
    insertAfter(search);
    show();
  }else
    cout<<ERR_404;

  getch();
}
