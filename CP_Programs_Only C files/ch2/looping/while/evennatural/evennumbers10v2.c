

  /*W.A.P to print all the even numbers from 1 to 10 
    and then display the sum of all the even numbers 
	
	2
	4
	6
	8
	10
	Sum is 30
 */
 
 #include<stdio.h>
 //#include<conio.h>
 
 int main()
 {
 	int i,sum=0;
 	i=2;
 	//clrscr();
 	
 	while(i<=10)
 	{
 		printf("%d\n",i);
 		sum=sum+i;
		i=i+2; //i++; //i+=2;
	}
	 
	 printf("Sum of all the even numbers is %d",sum);
	 
	 //getch();
	 return 0;
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
