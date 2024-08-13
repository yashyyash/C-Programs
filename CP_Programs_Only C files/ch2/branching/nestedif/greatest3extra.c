
  /* W.A.P to accept 3 integers from the user & find out the greatest number amongst them.
     Assume that the user will input UNIQUE numbers only. Dont use Logical Operator */
     
     
     #include<stdio.h>
     //#include<conio.h>
     
     int main()
     {
     	 int a,b,c;
     	 //clrscr();
     	 
     	 printf("Enter 3 integers ");
     	 scanf("%d %d %d",&a,&b,&c);
     	 
     	 if(a>b) //outer if
     	 {
     	 	if(a>c) //inner if
     	 	  printf("%d is greatest",a);     	 	
		} //end of outer if
		else //outer else
		{
			if(b>c)
			   printf("%d is greatest",b);
     	 	else 
     	 	  printf("%d is greatest",c);
		} //end of outer else
		
		//getch();
		return 0;		
	 }
   
