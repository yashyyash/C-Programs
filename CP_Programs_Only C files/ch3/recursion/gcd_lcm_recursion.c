
/* gcd of 2 numbers using Recursion 

   gcd(a,b)=a if b=0 (base condition)
           =gcd(b,a) if (a<b) (swapping)
           =gcd(b,a%b) otherwise
*/

 #include<stdio.h>

 int gcd(int a,int b); //fun declr

 int main()
 {
	int a,b,g,l;
	//clrscr();
	
	printf("Enter 2 numbers ");
	scanf("%d %d",&a,&b);
	
	g=gcd(a,b); //fun calling (a,b are actual arguments)
	l=(a*b)/g;  //lcm calculation
	
	printf("GCD is %d & LCM is %d",g,l);
	
	//getch();
	return 0;
 }  //end of main() 
 
 
 //func defn          
 int gcd(int a,int b) //fun defn (a,b are formal arguments)
 {
	if(b==0)  //if second number is zero (base condition)
	  return a;  //gcd is a	  
	else if(a<b) //for swapping
	   return(gcd(b,a));  
	else
	   return(gcd(b,a%b));  //Recursive Call  
 } //end of gcd()
 
  
