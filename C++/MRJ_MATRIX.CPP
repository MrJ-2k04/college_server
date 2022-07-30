/*
    Use dynamic memory allocation and create a matrix of mxn size
    take values from user and store it. Now take one value from
    user and add that value to every element of matrix.
*/

#include<iostream.h>
#include<conio.h>

void main(){
  clrscr();

  // Getting matrix size
  int m,n;
  cout<<"Enter size of matrix (MxN): ";
  cin>>m>>n;

  // Dynamically allocating memory to new array
  int **mat = new int*[m];
  for(int x=0;x<m;x++)
    mat[x]=new int[n];

  // Getting user input
  for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
      cout<<endl<<"Enter ["<<i<<"]["<<j<<"]: ";
      cin>>mat[i][j];
    }
  }

  // Printing array before adding
  for(i=0; i<m; i++){
    for(int j=0; j<n; j++){
      cout<<mat[i][j]<<"\t";
    }
    cout<<endl;
  }

  // Getting value to be added
  int num;
  cout<<endl<<"Enter a num to add to each element: ";
  cin>>num;

  // Adding and Printing final array
  for(i=0; i<m; i++){
    for(int j=0; j<n; j++){
      mat[i][j]+=num;
      cout<<mat[i][j]<<"\t";
    }
    cout<<endl;
  }

  getch();
}
