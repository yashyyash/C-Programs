
  /* 
   
  A
  B C
  D E F
  G H I J
  
  ....
  for n lines
  
  */
  
  #include<stdio.h>
  //#include<conio.h>
  
  int main()
  {
  	 int r,c,n;
  	 char k;
  	 //clrscr();
  	 
  	 printf("How many rows(lines) ");
  	 scanf("%d",&n);
  	 
  	 k='A'; //Because pattern starts with 'A'
  	 for(r=1;r<=n;r++)
  	 {
  	 	for(c=1;c<=r;c++)
  	 	{
  	 		printf("%c ",k++); //k increments
		}		
		printf("\n"); 		 	
	}
	
	//getch();
	return 0;
  }
  	 
  	 
  	 
  	 
  	 
  	 
  	 
  	 
  	 

