#include<iostream.h>
#include<conio.h>

class student{
  public:
    void setRollno(int);
    void setName(string);
    void setDiv(char);
    void showDetails();
  private:
    int rollno;
    string name;
    char div;
};

void student::setRollno(int no){
  this->rollno = no;
}
void student::setName(string name){
  this->name = name;
}
void student::setDiv(char d){
  this->div = d;
}
void student::showDetails(){
  cout<<this->name<<" having rollno "<<this->rollno<<" studies in "<<this->div<<" division";
}

void main(){
  student s1;
  s1.setRollno(68);
  s1.setName("Mr J");
  s1.setDiv('B');

  getch();
}
