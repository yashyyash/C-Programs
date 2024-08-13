
  #include<stdio.h>
  //#include<conio.h>
  
  //solution 1 : using if else if else
  
  int main()
  {
  	int n;
  	//clrscr();
  	
  	printf("Enter a value ");
  	scanf("%d",&n);
  	
  	
  	switch(n)
  	{
  		
		default : 
  		        printf("Wrong Input");
  		        break;
		  
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
  	
  	} //end of switch 	
  	    
  	//getch(); 
	return 0;  
}
