

   /* W.A.P to accept an integer from the user and check its even or odd.
     Consider 0 to be an even number */
     
     
    #include<stdio.h>
	//#include<conio.h>
	
	int main()
	{
		int n;
		//clrscr();
		
		printf("Enter a number ");
		scanf("%d",&n);
		
		if(n%2==0)
		   printf("Even number");		
		else
	       printf("Odd number");		
		
		//getch();		
		return 0;
}
	 
