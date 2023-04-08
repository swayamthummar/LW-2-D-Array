#include<stdio.h>
main()
{	
    int a[10][10],i,n1,n2,j,sum=0,avg;
	printf("Enter the Number of Rows ->");
	scanf("%d",&n1);
	printf("Enter the Number of Colums ->");
	scanf("%d",&n2);
		
	printf("Enter the Element in 2D Array A-> \n");
	for(i=0;i<n1;i++)
	{
	for(j=0;j<n2;j++)
	{
		printf("a[%d][%d] = ",i,j);
		scanf("%d",&a[i][j]);
	}
	printf("Array a[]=\n");
	for(i=0;i<n1;i++)
	{
	for(j=0;j<n2;j++)
      	{
		printf("%d  ",a[i][j]);
		sum=sum+a[i][j];
    	}
    	printf("\n");
    }
    }
	printf("\nSum of 2D Array=%d\n",sum);
    avg = sum/(n1*n2);
	printf("\nAverage of 2D Array=%d",avg);
}

