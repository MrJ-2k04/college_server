#include<iostream.h>
#include<conio.h>
#include<dos.h>

void main(){
  clrscr();

  int gameOver=0;
  char c;

  int snX=25,snY=10, boardX=50, boardY=20, dir=0;
  char snk='*';
  while(!gameOver){
    clrscr();
    if(snX<2)
    {
    dir=0;
    snX=2;
    }
    if(snX>boardX-1)
    {dir=0;
    snX=boardX-1;}
    if(snY>boardY-1)
    {dir=0;
    snY=boardY-1;}
    if(snY<2)
    {dir=0;
    snY=2;}
    cout<<"WSAD to Play, X/0 to exit"<<endl<<endl;

    switch(dir){
      case 1:
	snY--;
	break;
      case 2:
	snX++;
	break;
      case 3:
	snY++;
	break;
      case 4:
	snX--;
	break;
    }

    // Printing
    for(int i=1; i<=boardY;i++){
      cout<<endl;
      for(int j=1;j<=boardX;j++){
	if(i==1||j==1||i==boardY||j==boardX)
	cout<<snk;
	else{
	   if(i==snY&&j==snX)
	   cout<<"$";
	   else
	   cout<<" ";
	}
      }
    }

    if(kbhit()){
       c=getch();
       if(c=='W'||c=='w'){
	 snY--;
	 dir=1;
       }else if(c=='S'||c=='s'){
	 snY++;
	 dir=3;
       }else if(c=='A'||c=='a'){
	 snX--;
	 dir=4;
       }else if(c=='D'||c=='d'){
	 snX++;
	 dir=2;
       }else if(c=='0'||c=='x'||c=='X'){
	   break;
       }

    }
    delay(100);
  }

  cout<<endl<<"Thanks for playing!";
  getch();
}
