
 //W.A.P to find the transpose of a Matrix using same array
 
 #include<stdio.h>
 //#include<conio.h>
 
 int main()
 {
 	int a[10][10],i,j,r,c,temp;
 	//clrscr();
 	
 	printf("Enter order of matrix(r*c) ");
 	scanf("%d %d",&r,&c);
 	
 	if(r==c) //Checking for square matrix
 	{
 		printf("Enter array elements\n");
 		for(i=0;i<r;i++)
 		{
 			for(j=0;j<c;j++)
 			{
 				scanf("%d",&a[i][j]);
			}
		}
		
		//Transpose Logic
		for(i=0;i<r;i++)
 		{
 			for(j=0;j<c;j++)
 			{
 			    if(i<j) //Perform swapping using temp
 			    {
 			    	temp=a[i][j];
 			    	a[i][j]=a[j][i];
 			    	a[j][i]=temp;
				 }
			}
		}
		
		
		//Display the transposed matrix
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				   printf("%d\t",a[i][j]);
			}
			printf("\n");
		}
	} //end of if
	else
	{
		printf("Its not a Square matrix hence transpose not possible");
	} //end of else
	
	//getch();
	return 0;
 }
