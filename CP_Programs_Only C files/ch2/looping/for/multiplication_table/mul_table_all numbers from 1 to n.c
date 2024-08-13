
 /* Program to print Multiplication Table of all numbers from 
    1 to n. 
	
	use nested loops*/
 
 #include<stdio.h>
 //#include<conio.h>
 
 int main()
 {
 	int n,i,j;
 	//clrscr();
 	
 	printf("Enter value of n ");
 	scanf("%d",&n);
 	
 	printf("Multiplication Table from 1 to %d is\n",n);
 	
 	for(i=1;i<=n;i++) //i loop provides numbers (number provider)
 	{
 	   for(j=1;j<=10;j++) // j loop generates table (table generator)
 	   {
 		 printf("%d\t",i*j);
	   } //end of inner for loop
 	    printf("\n");
	} //end of outer for loop
 	
	 //getch();
	 return 0; 	
 }
