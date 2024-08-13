#include<stdio.h>

 int sum(int m[],int n);

 int main()
 {
	int a[30],n,s,i;
	
	printf("How many array elements ");
	scanf("%d",&n);	  
	
	for(i=0;i<n;i++)  
        scanf("%d",&a[i]); 	  
	
	s=sum(a,n); 
	
	printf("Sum is %d \n",s);
	printf("Average is %f",(float) s/n);
	//
	return 0;
}

//Note: int m[] which is dummy array will be converted to int *m; (pointer) internally.

int sum(int m[],int n)
{
	int i,s=0;
	
	for(i=0;i<n;i++)  
      s=s+m[i];  
      
    return s;  	
}
