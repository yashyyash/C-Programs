

 /* W.A.P to display first n natural numbers and their sum also.
    Expected output 
    
    1
    2
    3
    .
    .
    n 
    
    1
    2
    3
    4
    5
    Sum is 15
    (((((1+2+3+4+5=15))))  
	
	Assume user will enter positive numbers only
  */
   
   //solution 1 using 3 variables
   
   #include<stdio.h>
   //#include<conio.h>
   
   int main()
   {
   	int n,sum=0,i;
   	//clrscr();
   	
   	printf("Enter a number ");
   	scanf("%d",&n);
   	
   	for(i=1;i<=n;i++)
   	{
   	    sum=sum+i;	
	}
	
	printf("The sum is %d",sum);
	//getch();
	
	return 0;
  }
