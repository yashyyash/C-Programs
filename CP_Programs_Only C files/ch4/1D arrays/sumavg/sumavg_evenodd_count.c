
 #include<stdio.h>
 //include<conio.h>

 int main()
 {
   int a[30],i,soe=0,sod=0,counte=0,counto=0,n;
   //clrscr();
	
   printf("How many array elements ");
   scanf("%d",&n);	  
	
   for(i=0;i<n;i++)  
   {
	printf("Enter a number ");
	scanf("%d",&a[i]); 
	  
	//checking every array element(not index) is Even or Odd element
	if(a[i]%2==0)
	{
	  soe=soe+a[i];
	  counte++;
	}	    
	else
	{
	  sod=sod+a[i];
	  counto++;
	}	    	 
   } //end of for
	
   printf("Odd count is %d\n",counto);
   printf("Even count is %d\n",counte);
	
   if(counte==n)
   {
	printf("Sum of even numbers is %d & Average is %f",soe,(float)soe/counte);
	printf("\nNo Odd Numbers Exist");
   }	
   else if(counto==n)
   {
	printf("\nSum of odd numbers is %d & Average is %f",sod,(float)sod/counto);	
	printf("\nNo Even Numbers Exist");
   }
   else
   {
	printf("Sum of even numbers is %d & Average is %f",soe,(float)soe/counte);
	printf("\nSum of odd numbers is %d & Average is %f",sod,(float)sod/(5-counte));
   }
	//getch();	
	return 0;
 }
