/* W.A.P to continuously accept integers from the user and as soon as 
   user inputs 0 then display the sum of all the numbers entered before 0. */
   
 #include<stdio.h>
 
 int main()
 {
 	int n,sum=0;
 	
 	printf("Enter numbers & press 0 to stop ");
 	
 	for(n=0;n<10;n++)
 	{
 		scanf("%d",&n);
 		
 		if(n==0)
 		  break;
 		
		sum=sum+n;  
	 }
	 
	 printf("Sum is %d",sum);
	 return 0;
 		
   }  

