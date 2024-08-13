
  /* EQ
   
  A
  A B
  A B C
  A B C D
  
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
  	 	k='A'; //Every row starts with 'A'
  	 	for(c=1;c<=r;c++)
  	 	{
  	 		printf("%c ",k++); //In every row k will be incremented
		}		
		printf("\n");  	 	
	}
	
	//getch();
	return 0;
  }
    
  
     /*Note : about k++; 
                   in above printf() first current value of k is printed and then k is incremented by 1
                   because here k++ means it's a post increment operator */

  	 
  	 
  	 
  	 
  	 
  	 
  	 
  	 
  	 

