
   //W.A.P to check entered number is Palindrome number or not.
   
   #include<stdio.h>
   //#include<conio.h>
   
   int main()
   {
   	  int n,d,rev=0,temp;
   	  //clrscr();
   	  
   	  printf("Enter a number ");
   	  scanf("%d",&n);
   	  temp=n;
   	  
   	  
   	  while(n>0)   //n!=0
   	  {
   	  	d=n%10;
   	  	rev=rev*10+d; //Shifting logic 
   	  	n=n/10;   
	  }
	  
	if(rev==temp)
	   printf("Palindrome Number");
	else
	   printf("Not a Palindrome Number");
	
	  //getch();
	  
	  return 0;
   }
