#include<iostream.h>
#include<conio.h>

void main(){
  int arr[3][5]={
	{3,1,4,5,2},
	{0,0,0,0,0},
	{0,0,0,0,0}
  };
  int isGameOver=0, popFrom, pushTo;
  clrscr();

  // Main Game
  while(!isGameOver){
    // Printing
    int total = 0;
    for(int y=0; y<5; y++){
      if(arr[2][y]==y+1){
	 total += arr[2][y];
      }
    }

    clrscr();
    for(int i=0; i<5; i++){
      for(int j=0; j<3; j++){
	 if(arr[j][i]==0){
	   cout<<"-"<<"\t";
	 }else{
	   cout<<arr[j][i]<<"\t";
	 }
      }
      cout<<endl;
    }

    if(total==15){
      isGameOver=1;
      break;
    }

    cout<<endl<<"Enter 2 values, 1 for pop and 1 for push: ";
    cin>>popFrom>>pushTo;
    if(popFrom==0&&pushTo==0){ break; }

    // Input Range is Valid
    if(popFrom>=1&&popFrom<=3&&pushTo>=1&&pushTo<=3&&popFrom!=pushTo){
      int isValid=0;
      for(int i=0; i<5;i++){
	 if(arr[popFrom-1][i]!=0){
	    isValid=1;
	    break;
	 }
      }
      //Input is Valid
      if(isValid){
	 int val;
	 // Checking first non zero value from top
	 for(int i=0;i<5;i++){
	   if(arr[popFrom-1][i]!=0){
	     val = arr[popFrom-1][i];
	     arr[popFrom-1][i] = 0;
	     break;
	   }
	 }
	 // Checking first non zero value from top and inserting val above it
	 // Pushing to non-empty array
	 for(int x=0;x<5;x++){
	   if(arr[pushTo-1][x]!=0){
	     arr[pushTo-1][x-1] = val;
	     break;
	   }
	   if(x==4&&arr[pushTo-1][x]==0){
	     arr[pushTo-1][x] = val;
	     break;
	   }
	 }
      }else{
	 cout<<"Invalid Input!sdifds";
      }
    }else{
      cout<<endl<<"Invalid input!";
    }

    //break;
  }
  cout<<"Thanks for Playing"<<endl;
  getch();
}
