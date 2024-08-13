
   /*W.A.P for an insurance company which provides insurance to its employees 
    according to the following criteria ::
    
    1. If the employee is married.
    2. If the employee is unmarried,male and above 35 years of age
    3. If the employee is unmarried,female and above 30 years of age
    
    In all other cases the insurance is not given.
    
    Ask the user to input age,gender and marital status and check 
    whether the user is eligible for insurance or not.
    
    DONT USE ANY LOCICAL OPERATOR */
    
    #include<stdio.h>
  //include<conio.h>
  
  int main()
  {
  	int age;
  	char gen,st;
  	//clrscr();
  	
  	printf("Enter your age ");
  	scanf("%d",&age);
  	
    printf("Enter your gender(M/F) ");
    fflush(stdin);
  	scanf("%c",&gen);
  	
  	printf("Enter your marital status(Y/N) ");
  	fflush(stdin);
	scanf("%c",&st);
  	
   	if(st=='Y')
   	   printf("Insurance Given");
   	else //outer else
   	{
   		if(gen=='M') //inner if
   		{
   		   if(age>35)
			  printf("Insurance Given");
		   else
		      printf("Insurance not Given");	
		}//end of inner if	   
	   else
	   {
	   	if(age>30)
			  printf("Insurance Given");
		   else
		      printf("Insurance not Given");
	   }  //end of inner else
    } //end of outer else
  	
  	//getch();
  	return 0;
   }
    
    
    
    
    
    
    
    
    
    
    
    
