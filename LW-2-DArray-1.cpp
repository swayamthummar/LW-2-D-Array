#include<stdio.h>
main()
{	
    int a[10][10],i,j,n1,n2;
	printf("Enter Rows ->");
	scanf("%d",&n1);
	printf("Enter colums ->");
	scanf("%d",&n2);
	
	for(i=0;i<n1;i++)
	{
	for(j=0;j<n2;j++)
	{
		printf("a[%d][%d]=",i,j);
		scanf("%d",&a[i][j]);
	}
	  printf("Element in 2D Array =\n");
    for(i=0;i<n1;i++)
	{
	for(j=0;j<n2;j++)
      	{
		printf("%d  ",a[i][j]);
    	}
    	printf("\n");
    }
    }
}
