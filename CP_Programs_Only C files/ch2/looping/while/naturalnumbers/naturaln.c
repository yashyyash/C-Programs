     
     
    /* W.A.P to display first n natural numbers
    Expected output 
    
    1
    2
    3
    .
    .
    n 
	
	Assume user will enter positive numbers only
	*/
    
    #include<stdio.h>
    //#include<conio.h>
    
    int main()
    {
    	int i,n;  //loop variable (counter variable)
    	//clrscr();
    	
    	printf("Enter value of n ");
    	scanf("%d",&n);
    	
    	i=1; //Part 1
    	while(i<=n) //Part 2
    	{
    		printf("%d\n",i);
    		i=i+1; //i++;  //Part 3
		}
		//getch();
		return 0;
    }
    
    
