
  //W.A.P to accept a string & copy it into another string  
 //strcpy(dest_string,source_string);
  
  #include<stdio.h>
  //#include<conio.h>
  #include<string.h>
  
  int main()
  {
  	  char arr[10],brr[10];   	  
  	  //clrscr();
  	  
  	  printf("Enter string ");
  	  gets(arr);  
		
	  strcpy(brr,arr);	 
	  
	  printf("%s\n",arr);		  
  	  printf("%s\n",brr);
	   	   
  	  //getch();
  	  
  	  return 0;
  	  
  }
  
