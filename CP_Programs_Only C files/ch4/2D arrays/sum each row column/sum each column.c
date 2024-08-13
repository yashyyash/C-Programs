
/* W.C.P to find the sum of column elements of a 2D  M * N array without 
   using function*/

#include<stdio.h>

int main()
{
	int r,c,i,j,a[10][10],b[10];
    
	printf("Enter the order of matrix (r x c) ");
	scanf("%d %d",&r,&c);
	
	printf("Enter the values of matrix \n");
	for(i=0;i<=r-1;i++)
	{
		for(j=0;j<=c-1;j++)
		{
			printf("Enter a value:");
			scanf("%d",&a[i][j]);
		}
	}
	
	//To find the sum of columns
	for(i=0;i<=c-1;i++)
	{
		b[i]=0;
		for(j=0;j<=r-1;j++)
		   b[i]=b[i]+a[j][i];
		
	}
	printf("The entered matrix is:\n");
	for(i=0;i<=r-1;i++)
	{
		for(j=0;j<=c-1;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	printf("The sum of the columns are \n");
	for(i=0;i<=c-1;i++)
	{
		printf("%d\t",b[i]);
	}

    return 0;
}
