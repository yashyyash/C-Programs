
  /*
  
  EQ
    
  EDCBA
  EDCB
  EDC
  ED
  E
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
  	 
  	 for(r=n;r>=1;r--)
   	  {
   	  	k='E';  //K starts with E in each row
		for(c=1;c<=r;c++)
   	  	{
		   printf("%c",k--);  //k decrement by 1 
		}
		printf("\n");
	}
	//getch();
	return 0;
   }
  	 
  	 
  	 
  	 
  	 
