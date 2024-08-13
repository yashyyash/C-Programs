

   //W.A.P to find the largest of 2 numbers using function max()
   
   #include<stdio.h>
   //#include<conio.h>
   
   //Function Declr
   //int max(int,int);
   int max(int x,int y);
   
   int main()
   {
   	  int a,b,l;
   	  //clrscr();
   	  
   	  printf("Enter 2 numbers ");
	  scanf("%d %d",&a,&b);
		
	  l=max(a,b);  //Function Call  a,b are actual arguments
	
	  printf("Largest number is %d",l);	     	
   	  
   	  //getch();
   	  return 0;
   	}
   	
   	//Function Defn
   	int max(int x,int y)  //x,y are called formal arg/pars
   	{  //start of max()
   		if(x>y)
   		   return x;
   		else
   		   return y;   		
	} //end of max()
   	
   	
   	
   	
   	
   	
   	
   	
