
  //W.A.P to accept a string & concatenate it with another string 
  //strcat(dest_string,source_string);
  
  #include<stdio.h>
  //#include<conio.h>
  #include<string.h>
  
  int main()
  {
  	  char arr[10],brr[10];   	  
  	  //clrscr();
  	  
  	  printf("Enter 2 strings ");
  	  scanf("%s %s",arr,brr);
		
	  strcat(arr,brr);
	  
	  printf("%s\n",arr);		  
  	  printf("%s\n",brr);
	   	   
  	  //getch();
  	  
  	  return 0;
  	  
  }
  
