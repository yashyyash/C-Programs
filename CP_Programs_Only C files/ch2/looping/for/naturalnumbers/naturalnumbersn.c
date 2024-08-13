
    /* W.A.P to display first n natural numbers
    Expected output 
    
    1
    2
    3
    .
    .
    n 
	
	Assume user will enter positive numbers only
	*/
  
  #include<stdio.h>
  //#include<conio.h>
  
  int main()
  {
  	  int i,n;
  	  //clrscr();
  	  
  	  printf("Enter value of n ");
  	  scanf("%d",&n);
  	  
  	  for(i=1;i<=n;i++)
  	  {
  	  	  printf("\n%d",i);
	  }
	  
	  //getch();
	  return 0;  	
  }
