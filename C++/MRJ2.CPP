#include<iostream.h>
#include<conio.h>
class cal{
  int a,b;
  float result;

  public:
  void getNum();
  void add();
  void sub();
  void mul();
  void div();
  void showResult();
};
 void cal::getNum(){
  cout<<"Enter two numbers:";
  cin>>a>>b;
 }
 void cal::add(){
  result=a+b;
 }
 void cal::sub(){
  result=a-b;
 }
 void cal::mul(){
  result=a*b;
 }
 void cal::div(){
  result=a/(float)b;
 }
 void cal::showResult(){
  cout<<"result is :"<<result;
 }

void main(){
  clrscr();
  cal c;
  int whatDO;
  switch(whatDO){
  case:1,



  }


  c.showResult();
  getch();
}