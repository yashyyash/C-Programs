

  //W.A.P to accept age,gender & marital status and then display it on the console 
  
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
  	scanf(" %c",&gen);
  	
  	printf("Enter your marital status(Y/N) ");
	scanf(" %c",&st);
	
	  	   	
  	printf("Your age is %d,Your gender is %c,Your marital status is %c",age,gen,st);
  	
  	//getch();
  	return 0;
   }
