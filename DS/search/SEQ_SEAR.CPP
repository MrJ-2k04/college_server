#include<iostream.h>
#include<conio.h>

void main(){
  int i=5, search, result=0;
  int arr[5];
  clrscr();

  for(i=0; i<5; i++){
    cout<<"Enter value "<<i+1<<": ";
    cin>>arr[i];
  }

  cout<<"Enter number you want to search: ";
  cin>>search;

  for(i=0; i<5; i++){
    if(arr[i]==search){
      result=i;
      break;
    }
  }
  if(result==0){
    cout<<"Element not found!";
  }else{
    cout<<"Element found at "<<result<<endl;
  }

  getch();
}
