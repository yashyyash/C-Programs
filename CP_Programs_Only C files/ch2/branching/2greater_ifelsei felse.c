

  /* W.A.P to accept 2 integers from the user & find out the greatest number amongst them..
     Make sure that if both the numbers are equal, 
	 the program should display "Both are equal" */ 
     
     
     #include<stdio.h>
     //#include<conio.h>
     
     int main()
     {
     	int a,b;
     	//clrscr();
     	
     	printf("Enter 2 integers ");
     	scanf("%d %d",&a,&b);     	
     	
     	if(a>b)
     	   printf("%d is greater",a);
     	else if(b>a)
     	   printf("%d is greater",b);
     	else
     	   printf("Both are Equal");
     	   
     	//getch();  
		return 0;      	   
      }
     
