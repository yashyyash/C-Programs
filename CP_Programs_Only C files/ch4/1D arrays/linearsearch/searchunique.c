
  /* W.A.P to create an array of n integers & accept the values from the user.
     Now again ask the user to input a number to be searched in the array.
     If the no is present, then print its position otherwise print the 
     message number not found.
     
    Assume that the array contains all unique numbers only */
    
    #include<stdio.h>
    //#include<conio.h>
    
    int main()
    {
    	int a[30],i,n,s;
    	//clrscr();
    	
    	printf("How many array elements? ");
    	scanf("%d",&n);
    	
    	
    	for(i=0;i<n;i++)
    	{
    	   scanf("%d",&a[i]);
		}
		
		printf("Enter the number to be searched? ");
		scanf("%d",&s);
		
		for(i=0;i<n;i++)
		{
			if(a[i]==s)
			{
				printf("Number found at %d position",i+1);
				break;   
			}
		}
		
		//Special Case
		if(i==n)
		   printf("Number not found");
		
		//getch();
		
		return 0;
	}
