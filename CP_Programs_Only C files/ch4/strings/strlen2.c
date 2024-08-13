
  //W.A.P to accept a string & display its length using strlen()
  
  //strlen(string_name) : Calculates & returns the length of the string
  
  #include<stdio.h>
  //#include<conio.h>
  #include<string.h>
  
  int main()
  {
  	  char str[15];   	  
  	  //clrscr();
  	  
  	  printf("Enter your name ");
  	  gets(str);  	  
  	 
	  printf("Lengh is %d",strlen(str)); 
  	   
  	  //getch();
  	  
  	  return 0;
  	  
  }
  
