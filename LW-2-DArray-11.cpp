#include<stdio.h>
main()
{	
    int a[5][5],i,n1=5,n2=5,j,sum=0;
	printf("the Number of Rows ->%d\n ",n1);
	printf("the Number of Colums ->%d\n ",n2);
		
	if(n1==n2)
    {
	printf("Enter the Elements of Matrix a[5][5]: \n");
	for(i=0;i<n1;i++)
	{
	for(j=0;j<n2;j++)
	{
		printf("a :[%d][%d] = ",i,j);
		scanf("%d",&a[i][j]);
	} 
	   printf("Matrix a[]=\n");  
	   for(i=0;i<n1;i++)
      	{
	      for(j=0;j<n2;j++)
		  {
		  printf("%d ",a[i][j]);
    	  } 
    	  printf("\n");
        }
    }
        printf("inner element of a Matrix a[]=\n");  
	   for(i=1;i<n1-1;i++)
      	{
	      for(j=1;j<n2-1;j++)
		  {
		  	printf("%d ",a[i][j]);
		  	sum=sum+a[i][j];
    	  } 
    	  printf("\n");
        }
         printf("The sum of inner element of  a[]=\n");
     	 printf("%d ",sum);     
          }  
          else
          {
          	printf("The Given naumber is not Square Matrix\n");
		  }
}
