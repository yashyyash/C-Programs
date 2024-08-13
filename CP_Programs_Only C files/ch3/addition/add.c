   
   //W.A.P to add 2 numbers using a function add()
   
   #include<stdio.h>
   //#include<conio.h>
   
   //Function Declr
    int add(int,int);
    //int add(int x,int y);
    
    
    int main()
    {
    	 int a,b,r;
    	 //clrscr();
    	 
    	 printf("Enter 2 numbers ");
    	 scanf("%d %d",&a,&b);
    	 
    	 r=add(a,b);   //Function Calling
    	 
    	 printf("Sum is %d",r);
    	 
    	 //getch();    	 
    	 return 0;    	 
	}
	
	
	//Function Defn	
	int add(int a,int b)
	{
	   int z;
	   z=a+b;
	   return z;		
	}
