#include<iostream.h>
#include<conio.h>

void show(int*, int);

void swap(int& a, int& b){
    int temp=a;
    a=b;
    b=temp;
}

int sortAroundPivot(int *arr, int start, int end){
    int pivot=start;
    while(1){
      for(int i=start; i<=end; i++){
	if(arr[pivot]<arr[i]){
	 break;
	}
      }
      for(int j=end; j>=start; j--){
	if(arr[pivot]>=arr[j]){
	  break;
	}
      }
      if(i<j){
	swap(arr[i],arr[j]);
      }
      if(j<i){
	swap(arr[pivot],arr[j]);
	return j;
      }
      start=i;
      end=j;
    }
}

void quickSort(int *arr,int start, int end){
    int newPivot=sortAroundPivot(arr,start,end);

    // Debug
    // cout<<"start= "<<start<<"  end= "<<end<<"  pivot= "<<newPivot<<endl; show(arr,6); cout<<endl;

    if(start<newPivot)
    quickSort(arr,start,newPivot-1);

    if(newPivot<end)
    quickSort(arr,newPivot+1,end);
}

void main(){
  clrscr();
  int arr[]={9,8,7,6,5,4}, n=6;

  cout<<"Original Array: "; show(arr,n);

  quickSort(arr,0,n-1);

  cout<<"Sorted Array: "; show(arr,n);

  getch();
}

void show(int *arr, int n){
  for(int i=0;i<n;i++){
    cout<<arr[i];
    if(i!=n-1)
    cout<<", ";
  }
  cout<<endl;
}