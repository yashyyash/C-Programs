
   /*  
   
     1
     2 3
     4 5 6
     7 8 9 10 
     
   */
   
   #include<stdio.h>
   //#include<conio.h>
   
   int main()
   {
   	  int r,c,k;
   	  //clrscr();
   	  k=1; //Pattern starts with 1
   	  
   	  for(r=1;r<=4;r++)
   	  {   	 	
		for(c=1;c<=r;c++)
   	  	{
		   printf("%d ",k++);  //In pattern number simply increments by 1	 
		}
		printf("\n");
	  }
	//getch();
	return 0;
   }
