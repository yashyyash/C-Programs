
   /* 
   
     1
     1 2
     1 2 3
     1 2 3 4     
     
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
   	  	k=1; //Every row starts with 1
		for(c=1;c<=r;c++)
   	  	{
		   printf("%d ",k++);  //In every row k increments by 1 
		}
		printf("\n");
	}
	//getch();
	return 0;
   }
   
   /*Note : about k++; 
                   in above printf() first current value of k is printed and then k is incremented
                   because here k++ means it's a post increment operator */

