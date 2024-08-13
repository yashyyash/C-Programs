   
   
   //W.A.P to accept a number & display its digits on the console separately.
   
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
	  
	  while(rev>0)   //rev!=0
   	  {
   	  	d=rev%10;   
   	  	rev=rev/10;  
	    printf("%d\n",d); 
	  }	   
	  
	  //getch();
	  
	  return 0;
   }
