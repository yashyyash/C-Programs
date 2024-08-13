
   /*  
   
     1
     2 1
     3 2 1
     4 3 2 1     
   */
   
   #include<stdio.h>
   //#include<conio.h>
   
   int main()
   {
   	  int r,c,k;
   	  //clrscr();
   	
   	  for(r=1;r<=4;r++)
   	  {   	 	
		k=r;  //Every row starts with current value of r
		for(c=1;c<=r;c++)
   	  	{
		   printf("%d ",k--); //K is decremented by 1 in each row 
		}
		printf("\n");
	}
	//getch();
	return 0;
   }
   
   
   /*Note : about k--; 
                   in above printf() first current value of k is printed and then k is decremented by 1
                   because here k-- means it's a post decrement operator */
