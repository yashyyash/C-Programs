 
  //W.A.P to check entered number is positive or negative or zero
  
  #include<stdio.h>
  //#include<conio.h>
  
  int main()
  {
  	int n;
  	//clrscr();
  	
  	printf("Enter a number ");
  	scanf("%d",&n);
  	
  	if(n>0)
  	{
  		printf("Number is positive");
	}
	else if(n<0)
  	{
  		printf("Number is negative");
	}
	else
	{
		printf("Number is zero");
	}
		
	//getch();
	return 0;
  }
