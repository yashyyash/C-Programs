/* W.A.P to find the GCD and LCM of 2 given numbers.

   GCD : Greatest Common Divisor
            (Highest Common Divisior)

   LCM : Least Common Multiplication

    say a=11 b=4    gcd=1
        a=10 b=5    gcd=5 */
        
  #include<stdio.h>
  //#include<conio.h>
  
  int main()
  {
  	int a,b,rem,temp,gcd,lcm,p;
  	//clrscr();
  	
  	printf("Enter 2 Numbers ");
  	scanf("%d %d",&a,&b);
  	p=a*b;  //V.IMP :: used in LCM calculation later
  	
  	//Step 1 : a>b(always) if not swap(a,b) using temp	
  	if(a<b) //SWAPPING LOGIC using temp
  	{
  		temp=a;
  		a=b;
  		b=temp;
	}
		
	
	do
	{
	  rem=a%b; //Step 2
	  //Step 3	 (swapping)
	  a=b;
	  b=rem;
	} while(b>0); //or b!=0  
	//Step 4 : b(smallest) is zero or not if yes stop the loop else continue 2,3 & 4 steps
	
	gcd=a;	
	printf("GCD is %d",gcd);
	
	lcm=p/gcd;  //Mathematical Formula	
	printf("\nLCM is %d",lcm);
	
	//getch();	
	return 0;
 }
	
	      

