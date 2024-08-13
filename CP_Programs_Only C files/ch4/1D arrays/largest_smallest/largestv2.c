
 /* W.A.P to accept n numbers from the user & find the largest number.
    It will work fine if all are negative numbers */
 
 
 #include<stdio.h>
 //#include<conio.h>
 
 int main()
 {
 	int a[30],i,n,max;
 	//clrscr();
 	
 	printf("How many array elements? ");
 	scanf("%d",&n);
 	
 	printf("Enter array elements \n");
 	for(i=0;i<n;i++)
 	{
 		printf("Enter a no ");
 		scanf("%d",&a[i]);
	}
	
	max=a[0];  //Assume a[0] is the largest element
	
	for(i=1;i<n;i++)
	{
		 if(a[i]>max)
		   max=a[i];
	}
	
	printf("The largest element is %d",max);
	
	//getch();
	
	return 0;
 	
 }
 
