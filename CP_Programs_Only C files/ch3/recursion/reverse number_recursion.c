 
 /* W.C.P to accept a number & Find its Reverse using Recursion */

 #include<stdio.h>
 
 int reverse(long int n);

 int main()
 {
    int n,r;
    //clrscr();
	
	printf("Enter a number ");
	scanf("%ld",&n);
	
	r=reverse(n);
	
	printf("Reverse is %d",r);
	
	//getch();
	return 0;
 } 
	
 //Func Defn	
 int reverse(long int n)
 {
 	static long int rev=0; 
	//v.v.imp : it should be static variable only ie initialized only once.
 	int digit;
 	
 	if(n==0)
 	  return n;
 	else
 	{ 
	  digit=n%10;  
	  rev=rev*10+digit;	  
	  reverse(n/10);  //Imp : Recursive Call.
	  return rev;
    }       	
 } //end of reverse()	
	
	
