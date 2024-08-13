     
     
    /* W.A.P to display first n natural numbers and their sum also.
    Expected output 
    
    1
    2
    3
    .
    .
    n 
    
    1
    2
    3
    4
    5
    Sum is 15
    (((((1+2+3+4+5=15))))  
	
	Assume user will enter positive numbers only
	*/
    
    #include<stdio.h>
    //#include<conio.h>
    
    int main()
    {
    	int i,n,sum=0;  //loop variable (counter variable)
    	//clrscr();
    	
    	printf("Enter value of n ");
    	scanf("%d",&n);
    	
    	i=1; //Part 1
    	while(i<=n) //Part 2
    	{
    		printf("%d\n",i);
    		sum=sum+i;
    		i=i+1; //i++;  //Part 3
		}
		
		printf("Sum is %d",sum);
		//getch();
		return 0;
    }
    
    
