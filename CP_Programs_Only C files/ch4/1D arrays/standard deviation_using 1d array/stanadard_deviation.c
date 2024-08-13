
/* EQ 

   W.C.P to evaluate the value of the Standard Deviation(s.d) 
   and display the result.
              n             -
   s.d.= Sqrt(Summation (xi-x)^2)
              i=1
         -     
   where x is the average of all the numbers.          
 -------------------------------------------------------------------
*/

#include<stdio.h>
#include<math.h>

int main()
{
	int a[100],n,i,sum=0;
    float avg,sum1=0.0,sd;

	printf("Enter the number of elements ");
	scanf("%d",&n);
	
	//Step 1 : Array Elements Accepted and Sum is calculated.
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];  //sum is calculated
	}
	
	//Step 2 : Average(x bar) is calculated
	avg=1.0*sum/n;  

    /*Step 3 : Sum1 is calculated to find the value of the 
	           term (xi-avg)^2 from i=0 to n-1 */
	for(i=0;i<n;i++)
	  sum1=sum1+pow(a[i]-avg,2);
	
	
	//Step 4 : Square Root Calculated.
	sd=sum1/n; //Above calculated sum1 is divided by n.
	sd=pow(sd,0.5); //Square Root of above sd is calculated.

	printf("Standard Deviation is %f",sd);
		
	return 0;
}
