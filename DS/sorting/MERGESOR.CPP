#include<iostream.h>
#include<conio.h>

//int arr[]={42,56,2,6,23,78,34,105,1,63};
//int arr[]={9,8,7};
int n=0;

void show(int *arr){
  for(int x=0; x<n; x++){
      cout<<arr[x];
      if(x!=n-1)
      cout<<", ";
  }
  cout<<endl;
}

int getLength(){
  cout<<"Enter size of array: ";
  int len;
  cin>>len;
  return len;
}

void getArray(int *arr){
  for(int i=0;i<n; i++){
    cout<<endl<<"Enter element "<<i+1<<" : ";
    cin>>arr[i];
  }
}

void csc(int *arr, int start, int mid, int end){  // Compare, sort, combine
  int left=start, right=mid;
  int temp[10],i=start;

  for(i=start;left<mid&&right<=end;i++){
    if(arr[left]<arr[right]){
      temp[i]=arr[left++];
    }else{
      temp[i]=arr[right++];
    }
  }

  while(left<mid){
    temp[i++]=arr[left++];
  }
  while(right<=end){
    temp[i++]=arr[right++];
  }

  for(i=start; i<=end; i++){
    arr[i]=temp[i];
  }

}

void mergeSort(int *arr, int start, int end){
  if(start<end){
    int mid=(start+end)/2+1;
    mergeSort(arr,start,mid-1);
    mergeSort(arr,mid,end);
    csc(arr,start,mid,end);
  }
}

void main(){
  clrscr();

  n=getLength();  // Get array length from user
  int *array=new int[n]; // Declare Dynamic array of size n
  getArray(array);  // Get user input for array elements

  cout<<endl<<"Original Array: "; show(array);  // Showing original array
  mergeSort(array,0,n-1);  // Sorting with Merge Sort Algo
  cout<<endl<<"Sorted Array: "; show(array);  // Showing sorted array

  getch();
}