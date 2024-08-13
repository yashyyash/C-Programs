   
   
   /*
   
    10 11 12 13 14 15
    10 11 12 13 14 15
    10 11 12 13 14 15
	
  */ 
  
  #include<stdio.h>
  //#include<conio.h>
  
  int main()
  {
  	
  	int r,c;
  	//clrscr();
  	
  	for(r=1;r<=3;r++) //outer for loop - r loop
  	{
	  for(c=10;c<=15;c++) //inner for loop - c loop
	  {
	  	printf("%d ",c);
	  } //end of inner for loop
	  printf("\n");  //moves the cursor to new line
	} //end of outer for loop
	
	//getch();
	return 0;
  }
  
  
  
  
  
  
  
  
  
  
  
  
  
  
