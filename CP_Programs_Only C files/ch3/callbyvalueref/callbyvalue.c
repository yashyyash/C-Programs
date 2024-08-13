

   //W.A.P to swap 2 numbers & use call by value argument passing approach
   
   
   #include<stdio.h>
   //#include<conio.h>
   
   //Fun Declr/prototype
   void swap(int a,int b);
   
   int main()
   {
   	  int x,y;
   	  //clrscr();
   	  
   	  printf("Enter 2 values ");
   	  scanf("%d %d",&x,&y);
   	  
   	  printf("Before Swapping x is %d & y is %d",x,y);
   	  
   	  swap(x,y);   //Function Calling (x,y : actual arguments)
   	  
   	  printf("\nAfter Swapping x is %d & y is %d",x,y); 
   	  
   	  //getch();
   	  
   	  return 0;
   	}
   	
   	
   	//Function Defn
   	void swap(int a,int b)   //Func Header
   	{
   	   int temp;
	   
	   temp=a;
	   a=b;
	   b=temp;	   		
   	}
   
