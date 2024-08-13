     
     
    /* W.A.P to display first n natural numbers in the reverse order.
    Expected output 
    
    n
    .
    .
    1
	
	Assume user will enter positive numbers only
	*/
    
    #include<stdio.h>
    //#include<conio.h>
    
    int main()
    {
    	int n;  
    	//clrscr();
    	
    	printf("Enter value of n ");
    	scanf("%d",&n);
    	
    	
    	while(n>=1) //Part 2
    	{
    		printf("%d\n",n);
    		n=n-1; //n--;  //Part 3
		}
		//getch();
		return 0;
    }
    
    
