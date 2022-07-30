#include<iostream.h>
#include<conio.h>

void main(){
  clrscr();
  cout<<"Enter array size: ";
  int n;
  cin>>n;

  int *arr=new int[n];
  for(int i=0; i<n; i++){
    cout<<endl<<"Enter value "<<i+1<<" : ";
    cin>>*(arr+i);
  }

  // Sorting
  for(i=0; i<n; i++){
    for(int j=0; j<n; j++){
       if(arr[i]<arr[j]){
	  int temp=arr[i];
	  arr[i]=arr[j];
	  arr[j]=temp;
       }
    }
  }

  // Printing Sorted Array
  for(i=0;i<n;i++){
    cout<<arr[i];
    if(i!=n-1)
    cout<<", ";
  }

  // Taking user input for search
  cout<<"\nEnter search term: ";
  int search;
  cin>>search;

  // Main Searching algorithm (Binary search)
  int found=0, start=0, end=n;
  while(!found){
     if(arr[(start+end)/2]==search){
	found=1;
	break;
     }else if(search<arr[(start+end)/2]){
	end=(start+end)/2;
     }else if(search>arr[(start+end)/2]){
	start=(start+end)/2;
     }
  }

  // Printing of position of element
  if(found)
	cout<<endl<<"Element found at: "<<((start+end)/2)+1;
  else
	cout<<endl<<"Element not found! Error code -1";
  getch();
}
