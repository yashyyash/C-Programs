
  /*
  
  EQ
  
  55555
  4444
  333
  22
  1
  */
  
  #include<stdio.h>
  //#include<conio.h>
  
  int main()
  {
  	 int r,c,n,k;  	
  	 //clrscr();
  	 
  	 printf("How many rows(lines) ");
  	 scanf("%d",&n);
  	 
  	 for(r=n;r>=1;r--)
   	  {
   	  	k=r; //Every row starts with current value of r
		for(c=1;c<=r;c++)
   	  	{
		   printf("%d",k); //value of r remains same in specific row
		}
		printf("\n");
	}
	//getch();
	return 0;
   }
  	 
  	 
  	 
  	 
  	 
