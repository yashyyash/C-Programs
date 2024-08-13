

 /*W.A.P to accept an integer from the user & print the sum of all digits of
   that no */
   
   //solution 2 using only 2 variables
   
   #include<stdio.h>
   //#include<conio.h>
   
   int main()
   {
   	int n,sum;
   	//clrscr();
   	
   	printf("Enter a number ");
   	scanf("%d",&n);
   	
   	for(sum=0;n>=1;n--)
   	{
   	    sum=sum+n;	
	}
	
	printf("The sum is %d",sum);
	//getch();
	
	return 0;
  }
