     
   /*   
    1 2 3
	1 2 3
	1 2 3  	
  */ 
  
  #include<stdio.h>
  //#include<conio.h>
  
  int main()
  {
  	
  	int r,c;
  	//clrscr();
  	
  	for(r=1;r<=3;r++) //outer for loop - r loop
  	{
	  for(c=1;c<=3;c++) //inner for loop - c loop
	  {
	  	printf("%d ",c);
	  } //end of inner for loop
	  printf("\n");  //moves the cursor to new line
	} //end of outer for loop
	
	//getch();
	return 0;
  }
  
  
  
  
  
  
  
  
  
  
  
  
  
  
