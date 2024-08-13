
   /*  EQ
   
     1
     2 2
     3 3 3
     4 4 4 4 
     
   */
   
   //Solution 2 : Using third variable k
   
   #include<stdio.h>
   //#include<conio.h>
   
   int main()
   {
   	  int r,c,k;
   	  //clrscr();
   	  
   	  for(r=1;r<=4;r++)
   	  {
   	 	k=r; //Every row starts with current value of r
		for(c=1;c<=r;c++)
   	  	{
		   printf("%d ",k);	 //k is same throughout the row
		}
		printf("\n");
	}
	//getch();
	return 0;
   }
