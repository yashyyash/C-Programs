/* W.A.P to continuously accept integers from the user and ignore
   negative numbers if entered. */
   
 #include<stdio.h>
 
 int main()
 {
 	int n,sum=0;
 	
 	printf("Enter numbers & press 0 to stop ");
 	
 	for(;;)
 	{
 		scanf("%d",&n);
 		
 		if(n==0)
 		  break;
 		else if(n<0)  //add elseif part
		  continue;  
 		
		sum=sum+n;  
	 }
	 
	 printf("Sum is %d",sum);
	 return 0;
 		
   }  

