
 //W.A.P to display the sum of diagonal elements of an array
 
 #include<stdio.h>
 //#include<conio.h>
 
 int main()
 {
 	int a[10][10],i,j,r,c,sum=0;
 	//clrscr();
 	
 	
 	printf("Enter Order of Matrix(r*c)? ");
 	scanf("%d %d",&r,&c);
 	
 	//Accepting the array elements
 	for(i=0;i<r;i++)
 	{
 		for(j=0;j<c;j++)
 		{
 			printf("Enter a number ");
 			scanf("%d",&a[i][j]);
 			
 			 if(i==j)
			     sum=sum+a[i][j];
 	    }
	 }
	 
	 //Displaying the array elements
	 for(i=0;i<r;i++)
 	 {
 		for(j=0;j<c;j++)
 		{
 			printf("%d\t",a[i][j]);
 	    }
 	    printf("\n");
	 } 
	 
	 
	 printf("The sum is %d",sum);
	 
	 //getch();
	 
	 return 0;
 }
