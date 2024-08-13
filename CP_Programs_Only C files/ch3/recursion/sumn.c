
  /*W.A.P to find out summation of n numbers using recursion 
    n=4   4+3+2+1=?  
	
	
	sum(n)=1  when n=1 (base condn)
	      =n+sum(n-1) when n>0*/
	      
    #include<stdio.h>
    //#include<conio.h>
    
    int sum(int n);
    
    int main()
   {
   	  int n,r;
   	  //clrscr();
   	  
   	  printf("Enter a number ");
   	  scanf("%d",&n);
   	  
   	  r=sum(n); 
   	  
   	  printf("Sum is %d",r);
   	  
   	  //getch();
   	  
   	  return 0;
   }
   
   
   int sum(int n)
   {
   	  int s;
   	  
   	  if(n==1)
   	  {
   	  	 s=1;
	  }
	  else
	  {
	  	s=n+sum(n-1);
	  	return s;
	  }
   }
