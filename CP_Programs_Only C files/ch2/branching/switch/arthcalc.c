

     /*W.A.P to perform an arithmetic operation on 2 integers given by the user. 
	   The operation to be performed must also be chosen by the user.

      The various operations are :: Addition, Subtraction, Multiplication, Division & Modulus.
	1. Addition 
	2. Subtraction
	3. Multiplication
	4. Division
	5. Modulus */

    #include<stdio.h>
  //#include<conio.h>
  
  //Mini-Calculator
  
  int main()
  {
  	int a,b;             //int a,b,choice;
  	int choice;
  	//clrscr();
  	
  	printf("Enter 2 integers ");
  	scanf("%d %d",&a,&b);
  	
  	printf("Select an option :: ");
  	printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Modulus");
  	
	printf("\nEnter your choice ");
	scanf("%d",& choice);
  	
  	
  	switch(choice)
  	{
  		case 1 :
  			     printf("Sum is %d",a+b);
  			     break;
  		case 2 :
  			     printf("Difference is %d",a-b);
  			     break;
  		case 3 :
  			     printf("Multiplication is %d",a*b);
  			     break;
  	    case 4 :
  			     printf("Division is %f",(float)a/b);  //type casting
  			     break;
  		case 5 :
  			     printf("Modulus result is %d",a%b);
  			     break;
  		default :
  			      printf("Wrong Choice");
    } //end of switch
	  
	//getch();
  	return 0;
   }
  	
  	
  	
  	
  	
  	
  	
  	
