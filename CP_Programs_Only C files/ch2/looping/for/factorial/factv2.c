
  
  /* W.A.P to accept an integer from the user & calculate its factorial & display it
 
    Make sure 1 is displayed if user enters 0 0!=1
    
    5!=5*4*3*2*1=120
    0!=1
    1!=1
  */
 
    
  //solution using only 2 variables
   
   #include<stdio.h>
   //#include<conio.h>
   
   int main()
   {
   	int n,i;
   	long int f=1;
   	//clrscr();
   	
   	printf("Enter a number ");
   	scanf("%d",&n);
   	
   	for(i=1;i<=n;i++)
   	{
   	    f=f*i;	
	}
	
	printf("The Factorial is %ld",f);
	//getch();
	
	return 0;
  }
