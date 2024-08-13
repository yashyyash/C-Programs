
   
    //W.A.P to accept 2D array elements & display on the console along with sum & avg
    
    #include<stdio.h>
    //#include<conio.h>
    
    int main()
    {
    	int a[10][10],i,j,r,c,sum=0;
    	//clrscr();
    	
    	printf("Enter the order of the matrix(r*c)? ");
    	scanf("%d %d",&r,&c);
    	
    	printf("Enter array elements\n");
    	for(i=0;i<r;i++) //Outer loop will manage the rows  i<=r-1
    	{
    		for(j=0;j<c;j++)  //Inner loop will manage the cols j<=c-1
    		{
    			printf("Enter a no ");
    			scanf("%d",&a[i][j]);
    			sum=sum+a[i][j];
			}
		}
		
		
		for(i=0;i<r;i++) //Outer loop will manage the rows  i<=r-1
    	{
    		for(j=0;j<c;j++)  //Inner loop will manage the cols j<=c-1
    		{
    			printf("%d\t",a[i][j]);
			}
			printf("\n");
		}
		
		printf("Sum is %d\n",sum);
		printf("Average is %f",(float)sum/(r*c)); //type casting
		
		//getch();
		
		return 0;
		
	}
