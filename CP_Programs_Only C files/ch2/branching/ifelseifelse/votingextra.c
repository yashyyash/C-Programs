
 /* W.A.P to accept the age from the user & check whether the user is eligible 
    for voting or not. In case the age given is 0 or negative then display
    the message Invalid age */
    
    
    #include<stdio.h>
    //#include<conio.h>
    
    int main()
    {
    	int age;
    	//clrscr();
    	
    	printf("Enter your age ");
    	scanf("%d",&age);
    	
    	if(age<18)
    	  printf("Not Eligibile to Vote");
    	else if(age>=18)
    	  printf("Eligibile to Vote");
    	else
    	  printf("Invalid Age");    	  
    	  
    	//getch();
    	return 0;
      }
