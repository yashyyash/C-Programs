
   /*  
   
     1
     2 4
     3 6 9
     4 8 12 16 
     
   */
   
   #include<stdio.h>
   //#include<conio.h>
   
   int main()
   {
   	  int r,c;
   	  //clrscr();
   	  
   	  for(r=1;r<=4;r++)
   	  {   	 	
		for(c=1;c<=r;c++)
   	  	{
		   printf("%d ",r*c);	 
		}
		printf("\n");
	}
	//getch();
	return 0;
   }
