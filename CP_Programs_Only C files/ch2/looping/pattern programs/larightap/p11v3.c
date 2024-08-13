
 /*
 
  1
  1 0
  1 0 1
  1 0 1 0
  
 */
 
 
 #include<stdio.h>
  //#include<conio.h>
  
  int main()
  {
  	 int r,c,n;
  	 //clrscr();
  	 
  	 printf("How many rows(lines) ");
  	 scanf("%d",&n); 	 
  	 
  	 for(r=1;r<=n;r++)
  	 {  	 	
		for(c=1;c<=r;c++)
  	 	{
  	 		printf("%d",c%2);   	 		
		}		
		printf("\n"); 		 	
	}	
	//getch();
	return 0;
  }
  	 
  	 
