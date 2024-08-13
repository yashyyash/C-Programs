
 /* W.A.P to accept the value of x. If value of x is greater or equal to 0 then
    assign 1 to y else assign -1 to y by using ?: */
 
 #include<stdio.h>
 //#include<conio.h>
 
 int main()
 {
 	int x,y;
 	//clrscr();
 	
 	printf("Enter value of x ");
 	scanf("%d",&x);
 
  	//only 1 statement used. 	
 	(x>=0)?(y=1):(y=-1);
 	printf("x=%d,y=%d",x,y);
	 
	//(x>=0)?(y=1);  //Invalid
	//(x>=0)?(y=1):; //Invalid	
	
	//getch();
	return 0;  	
 }
