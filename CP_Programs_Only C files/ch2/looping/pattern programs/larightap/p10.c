
  /* EQ
   
  E
  ED
  EDC
  EDCB
  EDCBA
  
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
  	 
  	 for(r=1;r<=n;r++)
  	 {
  	 	k='E';  //Every row starts with 'E'
		for(c=1;c<=r;c++)
  	 	{
  	 		printf("%c",k--); //In Every row value of k is decrement by 1
		}		
		printf("\n"); 		 	
	}
	
	//getch();
	return 0;
  }
  	 
  /*Note : about k--; 
                   in above printf() first current value of k is printed and then k is decremented by 1
                   because here k-- means it's a post decrement operator */
	 
  	 
  	 
  	 
  	 
  	 
  	 
  	 

