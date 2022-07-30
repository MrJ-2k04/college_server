#include<stdio.h>
#include<conio.h>

void main()
{
  int arr[6],i,j,temp;
  clrscr();

  printf("\nenter elements:");

  for(i=0;i<6;i++)
  {
	scanf("%d",&arr[i]);
  }

  for(i=0;i<5;i++)
  {
	for(j=0;j<5;j++)
	{
		if(arr[j]>arr[j+1])
		{
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}
	}
  }
  for(i=0;i<6;i++)
  {
    printf("\nelements are:%d",arr[i]);
  }
  getch();
}