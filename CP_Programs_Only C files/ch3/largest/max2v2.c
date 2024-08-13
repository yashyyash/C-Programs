

   //W.A.P to find the largest of 2 numbers using function max()
   
   #include<stdio.h>
   //#include<conio.h>
   
   //Function Declr
   //int max(int,int);
   int max(int x,int y);
   
   int main()
   {
   	  int a,b;
   	  //clrscr();
   	  
   	  printf("Enter 2 numbers ");
   	  scanf("%d %d",&a,&b);    
   	  
   	  //Nested Function call
   	  printf("The largest number is %d",max(a,b));
   	  
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
   	
   	
   	
   	
   	
   	
   	
   	
