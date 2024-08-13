
 /*
 
    *****
    ***
    **
    *
 */
 
 
 #include<stdio.h>
   //#include<conio.h>
   
   int main()
   {
   	  int r,c;
   	  //clrscr();
   	  
   	  for(r=4;r>=1;r--)  //Only Change ie r loop will change
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
