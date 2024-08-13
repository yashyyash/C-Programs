

   //W.A.P to find the largest of 4 numbers but using function max() only we discussed before
   
   #include<stdio.h>
   //#include<conio.h>
   
   //Function Declr
   //int max(int,int);
   int max(int x,int y);
   
   int main()
   {
   	  int a,b,c,d,l;
   	  //clrscr();
   	  
   	  printf("Enter 4 numbers ");
   	  scanf("%d %d %d %d",&a,&b,&c,&d);
   	  
   	  //Nested Function call   	 
	  l=max(max(a,b),max(c,d));	      	  
   	  
   	  printf("The largest number is %d",l);
   	  
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
   	
   	
   	
   	
   	
   	
   	
   	
