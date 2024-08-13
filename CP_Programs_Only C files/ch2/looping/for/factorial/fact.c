
  
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
   	int n;
   	long int f;
   	//clrscr();
   	
   	printf("Enter a number ");
   	scanf("%d",&n);
   	
   	for(f=1;n>1;n--)
   	{
   	    f=f*n;	
	}
	
	printf("The Factorial is %ld",f);
	//getch();
	
	return 0;
  }
