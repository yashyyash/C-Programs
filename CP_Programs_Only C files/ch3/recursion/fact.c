  
  
    //W.A.P to find Factorial of given number using Recursion
    
    /*General Statements
    
    n!=1   when n=0 or n=1 (Base Condn)
      =n*(n-1)!   when n>1 (continue recursive calls) */
      
      
      
  
  /* W.A.P to accept an integer from the user & calculate its factorial & display it
 
    Make sure 1 is displayed if user enters 0 0!=1
    
    5!=5*4*3*2*1=120
    0!=1
    1!=1
  */
 
    
  //Using Recursive Calls
   
   #include<stdio.h>
   //#include<conio.h>
   
   //Function Declr
   long int fact(int n);
   
   int main()
   {
   	int n;
   	long int r;
   	//clrscr();
   	
   	printf("Enter a number ");
   	scanf("%d",&n); 
	   
	r=fact(n);     	
	
	printf("The Factorial is %ld",r);
	//getch();
	
	return 0;
  }
    
    //Function defn
    long int fact(int n)
    {
       int i;
       long int f=1;
	   
	   if(n==0 || n==1)
	   {
	   	   return f;
	   }
	   else
	   {
	   	 f=n*fact(n-1); //Recursive call
	   	 return f;
	   }
	   
	   return f;	
	}
  
    
