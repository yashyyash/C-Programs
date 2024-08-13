
  /*W.A.P to check entered number is positive or negative. 
    Assume as of now user wont enter 0 */
 
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
	if(n<0)
  	{
  		printf("Number is negative");
	}
	
	//getch();
	return 0;
  }
