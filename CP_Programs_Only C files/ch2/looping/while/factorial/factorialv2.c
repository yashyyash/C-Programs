

 /* W.A.P to accept an integer from the user & calculate its factorial & display it
 
    Make sure 1 is displayed if user enters 0 0!=1
    
    5!=5*4*3*2*1=120
    0!=1
    1!=1
 */
 
 
 #include<stdio.h>
 //#include<conio.h>
 
 int main()
 {
 	int n;
 	long int f=1;
 	//clrscr();
 	
 	printf("Enter a number ");
 	scanf("%d",&n); 	
 	
 	while(n>1)   
 	{
 		f=f*n;
 		n=n-1;  //n--;
	}
	
	printf("Factorial is %ld",f);
	
	//getch();
	
	return 0;
  }
    
