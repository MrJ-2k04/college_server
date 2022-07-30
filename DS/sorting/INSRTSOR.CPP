#include<iostream.h>
#include<conio.h>

void main(){
  clrscr();
  int arr[]={56,79,69,20,32,2,10},n=7,i,j,temp;

  // Min insertion sort
  for(i=0; i<n; i++){
    int replacePos=0;
    temp=arr[i];
    for(j=0; j<i; j++){
       if(temp>arr[j]){
	  replacePos++;
       }else{
	  break;
       }
    }// End of Looping thru sorted array to insert element
    if(replacePos!=i||replacePos==0){
      for(j=i-1;j>=replacePos;j--){
	  arr[j+1]=arr[j]; // Shifting logic
      }// End of Shifting
      arr[replacePos]=temp;//Inserting target element
    }
  }// End of Sorting

  // Printing
  for(i=0; i<n;i++)
  {
   cout<<arr[i];
   if(i!=n-1)
   cout<<", ";
  }
  getch();
}
