
   /* EQ
   
        5
       54
      543
     5432
    54321
	 
   */
   
   #include<stdio.h>
   //#include<conio.h>
   
   int main()
   {
   	   int n,r,c,s,k;
   	   //clrscr();
   	   
   	   printf("How many rows (lines) ");
   	   scanf("%d",&n);
   	   
   	   for(r=1;r<=n;r++) //outer r loop
   	   {
   	   	   for(s=1;s<=n-r;s++) //inner s loop
   	   	   {
   	   	 	  printf(" ");
		   } //end of s loop 
		   
		   k=n; //every row starts with n value
		   
		   for(c=1;c<=r;c++)
		   {
		   	  printf("%d",k--);   //k is decremented by 1
		   }
		   printf("\n");
	    } //end of r loop
   	   
   	   //getch();
   	   return 0;
   	   
   }	    
