
 /* EQ - 2M
   W.C.P to accept numbers from user and add them.
   
   Stop accepting the numbers if the sum is greater or 
   equal to 100 and display the sum*/

 #include<stdio.h>
 //#include<conio.h>
 
 int main()
 {
	int n,total=0; 
	//clrscr();

    again:
	       printf("Enter a number:");
	       scanf("%d",&n);
	       total=total+n;
	
	if(total<100)
	  goto again;
	  
	printf("Total=%d",total);
	
	//getch();
	return 0;
	
}
