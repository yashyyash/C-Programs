/* W.A.P to implement x^y */

 #include<stdio.h>
 
 int main()
 {
 	int x,y,i;
 	long int r=1; 
 	
 	printf("Enter the base & power ");
 	scanf("%d %d",&x,&y); 
 	
 	for(i=1;i<=y;i++)   //i will run till y -> loop will run y times.
 	   r=r*x;   
	   /* multiply (base)x with r y(power) times and its as good as 
		  muliplying x with itself but dont write x=x*x */ 
	
	printf("%d raise to %d is %ld",x,y,r);
	
	return 0;
 }

