 //W.A.P find greatest number out of 2 using ternary/conditional operator ?:

 #include<stdio.h>
 //#include<conio.h>

 int main()
 {
	int n1,n2,max;
	//clrscr();	

	printf("Enter two numbers:");
	scanf("%d %d",&n1,&n2);

	max=(n1>n2)?n1:n2; 
	printf("\nThe Largest Number is :%d",max);
	
	//method-2
	//printf("\nThe Largest Number is :%d",(n1>n2)?n1:n2);

	//getch();
	return 0;
 }
