
   //W.A.P to find the sum of digits of given number using Recursion
   
   /*sum(n)=0 when n=0 (Base condn)
         =n%10+sum(n/10)      when n>0 (continue recursive calls) */
  
    #include<stdio.h>
    //#include<conio.h>
   
   int sum(int n);  //fun declr
   
   int main()
   {
   	  int n,r;
   	  //clrscr();
   	  
   	  printf("Enter a number ");
   	  scanf("%d",&n);
   	  
   	  r=sum(n); 
   	  
   	  printf("Sum of digits is %d",r);
   	  
   	  //getch();
   	  
   	  return 0;
   }
   
   
   int sum(int n)
   {
   	  int s=0;
   	  
   	  if(n==0)
   	  {
   	  	return s;
	  }
	  else
	  {
	  	s=s+(n%10)+sum(n/10);
	  	return s;
	  }
	  
   }
   
   
   
   
   
