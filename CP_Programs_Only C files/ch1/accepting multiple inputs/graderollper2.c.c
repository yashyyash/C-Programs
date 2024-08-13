
  //Version 2 : Using single printf(), scanf()
  
  #include<stdio.h>
  //#include<conio.h>
  
  int main()
  {
  	int r;
  	char g;
  	float p;
  	//clrscr();
  	
  	printf("Enter your grade,roll number & percentage ");
  	scanf("%c %d %f",&g,&r,&p); 
  	
  	printf("Your Roll number is %d\nYour Grade is %c\nYour Percentage is %f",r,g,p);
   	
  	//getch();  	
  	return 0; 	  	
  }
