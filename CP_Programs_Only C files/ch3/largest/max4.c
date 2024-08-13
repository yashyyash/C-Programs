

   //W.A.P to find the largest of 4 numbers but using function max() only we discussed before
   
   #include<stdio.h>
   //#include<conio.h>
   
   //Function Declr
   //int max(int,int);
   int max(int x,int y);
   
   int main()
   {
   	  int a,b,c,d,l1,l2,l;
   	  //clrscr();
   	  
   	  printf("Enter 4 numbers ");
   	  scanf("%d %d %d %d",&a,&b,&c,&d);
   	  
   	  l1=max(a,b);
   	  l2=max(c,d);
   	  l=max(l1,l2);  	  
   	  
   	  
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
   	
   	
   	
   	
   	
   	
   	
   	
