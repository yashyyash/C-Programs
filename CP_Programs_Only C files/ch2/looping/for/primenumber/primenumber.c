
  //W.A.P to check entered number is Prime Number or not.

  #include<stdio.h>
  //#include<conio.h>
  
  int main()
  {
  	int n,i;
  	//clrscr();
  	
  	printf("Enter a number ");
  	scanf("%d",&n);
  	
  	for(i=2;i<=n-1;i++)
  	{
  		
  		if(n%i==0)
  		{
  			printf("Its not a Prime Number");
  			break;
		}  		
	}
	
	if(i==n)
		printf("Its a Prime Number");
  	//getch();
  	return 0;  	
  }
