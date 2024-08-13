
  //W.A.P to accept a string & compare 2 strings
  
  //strcmp(array1,array2);
  
  #include<stdio.h>
  //#include<conio.h>
  #include<string.h>
  
  int main()
  {
  	  char arr[10],brr[10];
	  int r;   	  
  	  //clrscr();
  	  
  	  printf("Enter 2 strings ");
  	  scanf("%s %s",arr,brr);
  	  
  	  r=strcmp(arr,brr);
  	  //strcmp(array1,array2);
  	  
  	  printf("Result is %d",r);
		
	  if(r==0)
	     printf("Strings are equal");
	  else
	     printf("Strings are not equal");
	   	   
  	  //getch();
  	  
  	  return 0;
  	  
  }
  
