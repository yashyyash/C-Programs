    
     /*W.A.P to accept an integer from the user & check
       whether its an Armstrong number or not.
       
       Armstrong numbers are those numbers which have a special property :
       "Sum of the cube of all the digits of the number is equal to the number itself"
       
        Example :
             153     
             27+125+1=153
     */
     
     #include<stdio.h>
     //#include<conio.h>
     
     int main()
     {
     	
     	int n,sum,x,a;
     	//clrscr();
     	
     	printf("Enter a number ");
     	scanf("%d",&n);
     	a=n;
     	
     	for(sum=0;n>0;n=n/10)
     	{
     		x=n%10;
     		sum=sum+x*x*x;
		}
		
		if(a==sum)
		   printf("Number is Armstrong");
		else
		   printf("Number is not Armstrong");     	
     	
     	//getch();
     	return 0;
     	
   }
       
       
       
      
