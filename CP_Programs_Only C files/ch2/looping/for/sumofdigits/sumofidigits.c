
  /* W.A.P to accept an integer from the user & calculate & print
     the sum of the digits of that number. Use for loop 
	 
	 
	 Expected Output :
	 Enter a number 125
	 The sum of digits is 8 
	 
	 
	 ((((1+2+5=8))))
 */
 
 
 #include<stdio.h>
 //#include<conio.h>
 
 int main()
 {
 	int n,sum,x;
 	//clrscr();
 	
 	printf("Enter a number ");
 	scanf("%d",&n);
 	
 	for(sum=0;n>0;n=n/10)
 	{
 		x=n%10;
 	    sum=sum+x;	
	}
	printf("The sum of digits is %d",sum);
	//getch();
	return 0;
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
     
     
     
