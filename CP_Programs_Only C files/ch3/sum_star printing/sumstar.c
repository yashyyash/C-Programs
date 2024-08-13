/* Expected Output :

**************************************************************----* (80 columns covered)
Enter 2 numbers 10
20
**************************************************************----* (80 columns covered)
Sum is 30
**************************************************************----* (80 columns covered)

 */

#include<stdio.h>
//#include<conio.h>

int main()
{
	int a,b,i;
	//clrscr();	
	
	//print * 80 times on Console
	for(i=1;i<=80;i++)
      printf("*");
	
	printf("Enter 2 numbers ");
	scanf("%d %d",&a,&b);
	
	//print * 80 times on Console
	for(i=1;i<=80;i++)
      printf("*");
	
	printf("Sum=%d\n",a+b);  //\n is must here	
	
	//print * 80 times on Console
	for(i=1;i<=80;i++)
      printf("*");
      
	//getch();  	
	return 0;
}
