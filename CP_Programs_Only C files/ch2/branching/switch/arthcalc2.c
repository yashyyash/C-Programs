
    #include<stdio.h>
  //#include<conio.h>
  
  //Mini-Calculator
  
  int main()
  {
  	int a,b;             //int a,b,choice;
  	char choice;
  	//clrscr();
  	
  	printf("Enter 2 integers ");
  	scanf("%d %d",&a,&b);
  	
  	printf("Select an option :: ");
  	printf("\nA.Addition\nS.Subtraction\nM.Multiplication\nD.Division\nR.Modulus");
  	
	printf("\nEnter your choice ");
	//fflush(stdin);
	scanf(" %c",&choice);
  	
  	
  	switch(choice)
  	{
  		case 'A' :
  			     printf("Sum is %d",a+b);
  			     break;
  		case 'S' :
  			     printf("Difference is %d",a-b);
  			     break;
  		case 'M' :
  			     printf("Multiplication is %d",a*b);
  			     break;
  	    case 'D' :
  			     printf("Division is %f",(float)a/b);
  			     break;
  		case 'R':
  			     printf("Modulus result is %d",a%b);
  			     break;
  		default :
  			      printf("Wrong Choice");
    } //end of switch
	  
	//getch();
  	return 0;
   }
  	
  	
  	
  	
  	
  	
  	
  	
