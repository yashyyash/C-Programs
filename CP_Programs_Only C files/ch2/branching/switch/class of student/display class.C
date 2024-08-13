/*
 W.C.P to display the class according to the marks scored 
 by a Student.

 The marks scored is taken as input and the class is displayed 
 accordingy to the following range:

 Marks      Class
 70-100     Distinction
 60-69      First Class
 50-59      Second Class
 40-49      Pass Class
 00-39      Fail
 
 */
 
 #include<stdio.h>
 //#include<conio.h>
 
 int main()
 { 
	int marks;
	//clrscr();
		
	printf("Enter the marks out of 100 ");
	scanf("%d",&marks);

	if(marks==100) //First Condition is written outside switch.
	  printf("Distinction");
	else
	{
		switch(marks/10) //Quotient will be always between 0-9
		{

			/* Note:
			        Cases 0 to 3 --> Fail
			        Cases 7 to 9 --> Distinction
			*/
			case 0:
			case 1:
			case 2:
			case 3:	printf("Fail");
				    break;
			case 4: printf("Pass Class");
				    break;
			case 5: printf("Second Class");
				    break;
			case 6: printf("First Class");
				    break;
			case 7:
			case 8:
			case 9: printf("Distinction");
				    break;
			default:
			        printf("Invalid marks");
		} //end of switch
	} //end of else

	return 0;
	
 } //end of main()
