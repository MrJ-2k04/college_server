#include<stdio.h>
#include<conio.h>
void main()
{
  int a[6],i,j,temp,minpos;
  clrscr();

  printf("\nenter 6 element:");

    for(i=0;i<6;i++)
    {
      scanf("%d",&a[i]);
    }

   for(i=0;i<6-1;i++)
   {
	minpos=i;
	for(j=i+1;j<6;j++)
	{
		if(a[j]<a[minpos])
		{
			minpos=j;
		}

	}

    if(minpos!=i)
    {
	temp=a[i];
	a[i]=a[minpos];
	a[minpos]=temp;

    }
   }
     for(i=0;i<6;i++)
     {
	printf("\nelements are:%d",a[i]);
     }
   getch();
}