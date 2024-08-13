   
   
   //W.A.P to accept a number,separate its digits & display it in words.
   
   #include<stdio.h>
   //#include<conio.h>
   
   int main()
   {
   	  int n,d,rev=0;
   	  //clrscr();
   	  
   	  printf("Enter a number ");
   	  scanf("%d",&n);
   	  
   	  // Part 1 : To find the reverse of given number
   	  while(n>0)   //n!=0
   	  {
   	  	d=n%10;
   	  	rev=rev*10+d; //Shifting logic 
   	  	n=n/10;   
	  }	  
	  
	  //Part 2 : Display the digits of reverse number 
	  while(rev>0)   //rev!=0
   	  {
   	  	d=rev%10;   
   	  	rev=rev/10;  
	    
		switch(d)
		{
			case 0 : printf("Zero ");  break;
			case 1 : printf("One ");  break;
			case 2 : printf("Two ");  break;
			case 3 : printf("Three ");  break;
			case 4 : printf("Four ");  break;
			case 5 : printf("Five ");  break;
			case 6 : printf("Six ");  break;
			case 7 : printf("Seven ");  break;
			case 8 : printf("Eight ");  break;
			case 9 : printf("Nine ");  break;
		 } 
	  }	   
	  
	  //getch();
	  
	  return 0;
   }
