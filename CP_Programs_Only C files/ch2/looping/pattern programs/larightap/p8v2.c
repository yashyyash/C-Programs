
  /* 
   
  A
  B B
  C C C
  D D D D
  
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
  	 
  	  
  	 for(r=1,k='A';r<=n;r++,k++)
  	 {  	 	
  	 	for(c=1;c<=r;c++)
  	 	{
  	 		printf("%c ",k); //value of k remains same in each row
		}		
		printf("\n"); 			 	
	}
	
	//getch();
	return 0;
  }
  	 
  	 
  	 
  	 
  	 
  	 
  	 
  	 
  	 

