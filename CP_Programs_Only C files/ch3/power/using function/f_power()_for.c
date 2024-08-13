
 /* W.A.P to implement x^y using power() */

 #include<stdio.h>
 //#include<conio.h>
 
 unsigned long int power(int x,int y);   
 
 int main()
 {
 	int x,y;
 	unsigned long int r;
 	//clrscr();
 	 	
 	printf("Enter the base & power ");
 	scanf("%d %d",&x,&y); 
 	
 	r=power(x,y);  	
	printf("%d raise to %d is %lu",x,y,r);
	
	//getch();
	return 0;
 }
 
 unsigned long int power(int x,int y) //function defn
 {
	int i;
	unsigned long int r=1;
	
	for(i=1;i<=y;i++)   
 	   r=r*x;      
	
	return r;	
 }
