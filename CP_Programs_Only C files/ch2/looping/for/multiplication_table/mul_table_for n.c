
 /* Program to print Multiplication Table of Given Number */
 
 #include<stdio.h>
 //#include<conio.h>
 
 int main()
 {
 	int n,i;
 	//clrscr();
 	
 	printf("Enter value of n ");
 	scanf("%d",&n);
 	
 	for(i=1;i<=10;i++)
 	{
 	  printf("%d X %d=%d\n",n,i,i*n);
	}
	
	//getch();
	 return 0; 	
 }
