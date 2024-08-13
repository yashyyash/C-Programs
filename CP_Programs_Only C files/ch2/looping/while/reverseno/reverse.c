   
   //W.A.P to find the Reverse of given number.
   
   #include<stdio.h>
   //#include<conio.h>
   
   int main()
   {
   	  int n,d,rev=0;
   	  //clrscr();
   	  
   	  printf("Enter a number ");
   	  scanf("%d",&n);
   	  
   	  
   	  while(n>0)   //n!=0
   	  {
   	  	d=n%10;
   	  	rev=rev*10+d; //Shifting logic 
   	  	n=n/10;   
	  }
	  
	  printf("Reverse is %d",rev);
	  //getch();
	  
	  return 0;
   }
