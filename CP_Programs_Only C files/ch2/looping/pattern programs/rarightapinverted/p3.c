
   /* 
           
	 *
	**
   ***
    **
	 *
	  		    	 
   */
   
   #include<stdio.h>
   //#include<conio.h>
   
   int main()
   {
   	   int n,r,c,s;
   	   char k;
   	   //clrscr();
   	   
   	   printf("How many rows (lines) ");
   	   scanf("%d",&n);
   	   
   	   //Upper pattern
   	   for(r=1;r<=n;r++)
   	   {
   	   	  for(s=1;s<=n-r;s++)
   	   	  {
   	   	 	printf(" ");
		  }
		  for(c=1;c<=r;c++)
		  {
		 	printf("*");
		  }
		   printf("\n");
	   }  
	   
	   
	   //Lower pattern
   	   for(r=n-1;r>=1;r--)
   	   {
   	   	  for(s=1;s<=n-r;s++)
   	   	  {
   	   	 	printf(" ");
		  }
		  for(c=1;c<=r;c++)
		  {
		 	printf("*");
		  }
		   printf("\n");
	   }  
   	   //getch();
   	   return 0;
   	   
   }	    
