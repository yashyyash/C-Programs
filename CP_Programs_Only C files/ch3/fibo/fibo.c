

   /* W.A.P to generate Fibo Series 0,1,1,2,3,5,8,13.......
      where user will decide the value of n */
      
   
   //Without using any function
   
   #include<stdio.h>
   //#include<conio.h>
   
   
   int main()
   {
   	  int n,f1=0,f2=1,f3,i;
   	  //clsrcr();
   	  
   	  printf("How many fibo numbers to be generated ");
   	  scanf("%d",&n);
   	  
   	  printf("The Fibonacci Series is \n");
   	  printf("%d\n%d\n",f1,f2);
   	  f3=f2+f1;
   	  
   	  for(i=1;i<=n-2;i++)
   	  {
   	  	printf("%d\n",f3);
   	  	f1=f2;  //f1 should store previous value
   	  	f2=f3;  //f2 should store current value
   	  	f3=f1+f2;
	  }
	  
	  //getch();
   	  
   	  return 0;
  }
   
