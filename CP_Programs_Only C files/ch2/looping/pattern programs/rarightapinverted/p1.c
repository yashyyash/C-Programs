
   /*
         
	 ****
	  ***
	   **
	    *	 
   */
   
   #include<stdio.h>
   //#include<conio.h>
   
   int main()
   {
   	   int n,r,c,s;
   	   //clrscr();
   	   
   	   printf("How many rows (lines) ");
   	   scanf("%d",&n);
   	   
   	   for(r=n;r>=1;r--) //outer r loop
   	   {
   	   	   for(s=1;s<=n-r;s++) //inner s loop
   	   	   {
   	   	 	  printf(" ");
		   } //end of s loop 
		   
		   for(c=1;c<=r;c++)  //inner c loop
		   {
		   	  printf("*");
		   }
		   printf("\n");
	    } //end of r loop
   	   
   	   //getch();
   	   return 0;
   	   
   }	    
