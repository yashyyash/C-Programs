
  //W.A.P to sort the array elements in the ascending order.
  
  #include<stdio.h>
  //#include<conio.h>
  
  int main()
  {
  	int a[50];
  	int i,j,temp,n; //temp is used to swap the 2 array elements
  	//clrscr();
  	
  	printf("How many array elements to be sorted? ");
  	scanf("%d",&n);
  	
  	//Accepting the Array elements
  	printf("Enter array elements ");
  	for(i=0;i<=n-1;i++) //i<n
  	{
  	   scanf("%d",&a[i]);
	}
	
	//Main Logic - Sorting
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++) //j<=n-1
		{
			//Swapping logic
			if(a[i]>a[j])  //for descending the only change is if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			} //end of if
		} //end of inner loop (j loop)
	} //end of outer loop (i loop)
	
	
	printf("The Ascending order is\n");
	for(i=0;i<=n-1;i++)
	{
		printf("%d\n",a[i]);
	}
	
	//getch();
	
	return 0;
  }
   
   
