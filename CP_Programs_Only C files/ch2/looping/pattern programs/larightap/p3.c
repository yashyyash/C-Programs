
   /*  EQ
   
     1
     2 2
     3 3 3
     4 4 4 4 
     
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
		   printf("%d ",r);	 
		}
		printf("\n");
	}
	//getch();
	return 0;
   }
