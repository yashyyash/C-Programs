
  /*W.A.P to accept 2 integers from the user and display their sum. 
    Then ask the user if he wants to continue or not. If the answer is 'y' then 
	repeat the process otherwise end/terminate the program. */


  #include<stdio.h>
  //#include<conio.h>
  
  int main()
  {
  	int a,b;
  	char choice;
  	//clrscr();
  	
  	do
  	{
  		printf("Enter 2 integers ");
  		scanf("%d %d",&a,&b);
  		printf("Sum is %d",a+b);
  		
  		printf("\nDo you want to continue(Y/N)? ");
  		//fflush(stdin); //IMP
  		scanf(" %c",&choice);   //IMP space before %c
	}while(choice=='Y');
	
	//getch();
	return 0;
  }
