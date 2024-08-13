
/* W.A.P to accept three numbers from user and display the greatest of three using 
   the conditional operator/ternary operator ?: */
   

 #include<stdio.h>
 //#include<conio.h>

 int main ()
 {
	int a,b,c,max;
	//clrscr();
		
	printf("Enter three numbers:");
	scanf("%d%d%d",&a,&b,&c); 	
	
	//nested ?: similar to nested if
	max=(a>b) ? ((a>c)?a:c) : ((b>c)?b:c);
	//  expr1 ?      expr2  :     expr3
	printf("The largest number is :%d",max);
	
	//Method - 2
	//printf("\n\nThe largest number is :%d",(a>b) ? ((a>c)?a:c) : ((b>c)?b:c));
	
	return 0;
}

