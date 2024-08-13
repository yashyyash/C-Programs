  
 /*W.C.P to Evaluate the value of the following series & display the Result.

  n                n
  Summation xi^2-[ summation xi]^2
  i=1             i=1  
 ------------------------------------------------------------------
 */

 #include<stdio.h>
  
 /*
   1. The two terms sum1 and sum2 are calculated 
   2. Final sum is sum=sum1-sum2*sum2;
 */  

 int main() 
 {
	int n,i,a[100],sum1=0,sum2=0,sum;

    printf("Enter the number of elements ");
	scanf("%d",&n);
    
    //Array Elements Accepted.
	for(i=0;i<=n-1;i++)
	{
	   scanf("%d",&a[i]);
	}
	
	//Step 1 : Sum1 & Sum2 are calculated.
	for(i=0;i<n;i++)
	{
		sum1=sum1+a[i]*a[i];  //Square of each array element and its sum.
		sum2=sum2+a[i];       //sum of array elements,
	}

	//Step 2 : Final sum of series value calculated.
	sum=sum1-sum2*sum2;
	printf("The value of the series is %d",sum);
		
	return 0;
}
