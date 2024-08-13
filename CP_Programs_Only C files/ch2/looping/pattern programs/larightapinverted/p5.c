
  /*
  
  *
  **
  ***
  ****
  ***
  **
  *
  
  
  */
  
  #include<stdio.h>
  //#include<conio.h>
  
  int main()
  {
  	 int r,c,n; 	
  	 //clrscr();
  	 
  	 printf("How many rows(lines) of upper part ");
  	 scanf("%d",&n);
  	 
  	 //Upper Pattern
  	 for(r=1;r<=n;r++)
  	 {
  	 	for(c=1;c<=r;c++)
  	 	{
  	 		printf("*");
		}
	   printf("\n");
	 }
	 
	 //Lower Pattern
	 for(r=n-1;r>=1;r--)
	 {
	 	for(c=1;c<=r;c++)
  	 	{
  	 		printf("*");
		}
	   printf("\n");
	 }
  	   	 
	//getch();
	return 0;
   }
  	 
  	 
  	 
  	 
  	 
