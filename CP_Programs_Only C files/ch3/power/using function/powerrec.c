
 /* W.A.P to implement x^y using power()
    using Recursive Call */
    
 /*   
     x^y=1 when y=0 (base(terminating condn)
        =x*(x^y-1)    when y>1 (continue recursive calls)
 */
 
      

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
	
	if(y==0)  //Base condn
	{
		return r;
	}
	else
	{
		r=x*power(x,y-1);
		return r;
	}
 }
