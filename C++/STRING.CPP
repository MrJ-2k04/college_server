#include<iostream.h>
#include<conio.h>
#include<string.h>

class String{
  public:
  char data[500];
  // Constructors
  String(){}
  String(char *val){
    strcpy(data,val);
  }
  /*String(String *obj){
    strcpy(data,obj->data);
  }*/

  // Operator Overloading
  String operator + (String obj){
    String temp;
    strcpy(temp.data,this->data);
    strcat(temp.data,obj.data);
    return temp;
  }

  // Functions
  void print(){
    cout<<data<<endl;
  }
};

void main(){
  clrscr();

  String s1("Hello "),s2("MrJ");
  String s3=s1+s2;
  s3.print();

  getch();
}