
 /* W.A.P to accept the value of x. If value of x is greater then or equal to 0 then
    assign 1 to y,2 to z else assign -1 to y,-2 to z */
 
  #include<stdio.h>
 //#include<conio.h>
 
 int main()
 {
 	int x,y,z;
 	//clrscr();
 	
 	printf("Enter value of x ");
 	scanf("%d",&x);
 	
 	//only 1 statements used. 	
 	(x>=0)?(y=1,z=2):(y=-1,z=-2); 	
 	
	printf("x=%d,y=%d,z=%d",x,y,z);
	
	//getch();
	return 0; 
 }
