
  /*W.A.P to accept an integer between 1 to 7 and 
  accordingly display Monday….Sunday i.e. display weekday messages 
  else display “Wrong Input” */


  #include<stdio.h>
  //#include<conio.h>  
    
  int main()
  {
  	int n;
  	//clrscr();
  	
  	printf("Enter a value ");
  	scanf("%d",&n);  	
  	
  	switch(n)
  	{
  		case 1:
  			    printf("Monday");
  			    break;
  		case 2:
  			    printf("Tuesday");
  			    break;
  		case 3:
  			    printf("Wednesday");
  			    break;
  		case 4:
  			    printf("Thursday");
  			    break;
  		case 5:
  			    printf("Friday");
  			    break;
  		case 6:
  			    printf("Saturday");
  			    break;
  		case 7:
  			    printf("Sunday");
				break;  			   
  		default : 
  		        printf("Wrong Input");
  	} //end of switch 	
  	    
  	//getch(); 
	return 0;  
 }
