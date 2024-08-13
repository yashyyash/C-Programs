 
  /*W.A.P to perform an arithmetic operation on 2 numbers given by the user. 
    The operation to be performed must also be chosen by the user.
    The various operations are :: Addition, Subtraction, Multiplication, 
	Division & Modulus */
	
	#include<stdio.h>
    //#include<conio.h>
  
   int main()
   {
   	 int a,b,choice;
   	 //clrscr();
   	 
   	 printf("Enter 2 Integers ");
   	 scanf("%d %d",&a,&b);
   	 
   	 printf("Select an Operation: \nA/+.Addition\nB/-.Subtraction\nC/*.Multiplication\nD//.Division\nE/%.Modulus ");
   	 scanf(" %c",&choice); //V.V.IMP
   	 
   	 switch(choice)
   	 {
   	 	case 'A' : 
		case 'a' :
		case '+' :
   	 		               printf("Sum is %d",a+b);
   	 		               break;
   	 	case 'B' : 
		case 'b':
		case '-':
   	 		               printf("Difference is %d",a-b);
   	 		               break;
   	 	case 'C' : 
		case 'c':
		case '*':
   	 		               printf("Multiplication is %d",a*b);
   	 		               break;
   	 	case 'D' : 
		case 'd' :
		case '/' :
   	 		               printf("Division is %f",(float)a/b);
   	 		               break;
   	 	case 'E' : 
		case 'e' :
		case '%' :
   	 		               printf("Modulus is %d",a%b);
   	 		               break;
   	 	default :
   	 		        printf("Wrong Input");   	 		     	    
		}
   	 
   	 //getch();
   	 return 0;
   }

