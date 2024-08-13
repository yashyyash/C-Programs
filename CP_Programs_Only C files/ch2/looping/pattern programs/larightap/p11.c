
 /* Binary Toggle Pattern
 
  1
  1 0
  1 0 1
  1 0 1 0
  
 */
 
 
 #include<stdio.h>
  //#include<conio.h>
  
  int main()
  {
  	 int r,c,n,k;
  	 //clrscr();
  	 
  	 printf("How many rows(lines) ");
  	 scanf("%d",&n); 	 
  	 
  	 for(r=1;r<=n;r++)
  	 {
  	 	k=1; //Every row starts with 1
		for(c=1;c<=r;c++)
  	 	{
  	 		printf("%d ",k);  
  	 		//Toggle logic
  	 		if(k==1)
  	 		   k=0;
  	 		else
  	 		   k=1;
		}		
		printf("\n"); 		 	
	}	
	//getch();
	return 0;
  }
  	 
  	 
