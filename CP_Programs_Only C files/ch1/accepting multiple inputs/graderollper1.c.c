
  /*W.A.P to accept Grade,Roll Number & Percentage from the user and then
    display the details on the console */
    
  //Solution 1
  
  #include<stdio.h>
  //#include<conio.h>
  
  int main()
  {
  	int r;
  	char g;
  	float p;
  	//clrscr();
  	
  	printf("Enter your grade ");
  	scanf("%c",&g);
  	
  	printf("Enter your roll number ");
  	scanf("%d",&r);
  	
  	printf("Enter your percentage ");
  	scanf("%f",&p);
  	
  	
  	printf("Your Roll number is %d",r);
  	printf("\nYour Grade is %c",g);
  	printf("\nYour Percentage is %f",p);
  	//Precision of float is 6 by default
  	printf("\nYour Percentage is %.3f",p);
  	//%.3f will only print 3 digits after decimal point
  	
  	//getch();  	
  	return 0; 	  	
  }
