
  /*W.A.P to accept the age from the user. If the age given is positive
  then print it otherwise if the age is 0 or negative then display the
  error message  “Invalid age try again” & ask the user to re-enter his
  Age. Repeat the process until age given by user is positive*/
 
  #include<stdio.h>
  //#include<conio.h>
  
  int main()
  {
  	int age;
  	//clrscr();
  	
  	input_age : 
	printf("Enter your age ");
  	scanf("%d",&age);
  	
  	if(age<=0)
  	{
  		printf("Invalid age try again\n");
  		goto input_age;
	}
	else
	  printf("Your age is %d",age);
	  
	//getch();	
	return 0;
  }
