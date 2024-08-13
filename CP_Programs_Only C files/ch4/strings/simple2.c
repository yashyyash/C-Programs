
  //W.A.P to accept a string(user name) & display on the console vertically
  //Traversal of a string
  
  
  #include<stdio.h>
  //#include<conio.h>
  
  int main()
  {
  	  char str[5];
	  int i; 
  	  //clrscr();
  	  
  	  printf("Enter your name ");
  	  scanf("%s",str);
  	  
  	  for(i=0;str[i]!='\0';i++)
  	  {
  	  	printf("%c\n",str[i]);
	  }   	  
  	  
  	  //getch();
  	  
  	  return 0;
  	  
  }
  
