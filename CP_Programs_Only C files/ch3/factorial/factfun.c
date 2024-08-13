
  
  /* W.A.P to accept an integer from the user & calculate its factorial & display it
 
    Make sure 1 is displayed if user enters 0 0!=1
    
    5!=5*4*3*2*1=120
    0!=1
    1!=1
  */
 
    
  //solution using only 2 variables
   
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
	   
	   for(i=1;i<=n;i++)
   	   {
   	     f=f*i;	
	   }
	   
	   return f;	
	}
  
    
