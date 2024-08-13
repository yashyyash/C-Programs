
 /* W.A.P to accept n numbers from the user & find the largest number 
 
    Note : This program wont work if all are negative values hence its a flaw */
 
 
 #include<stdio.h>
 //#include<conio.h>
 
 int main()
 {
 	int a[30],i,n,max=0;
 	//clrscr();
 	
 	printf("How many array elements? ");
 	scanf("%d",&n);
 	
 	printf("Enter array elements \n");
 	for(i=0;i<n;i++)
 	{
 		printf("Enter a no ");
 		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		 if(a[i]>max)
		   max=a[i];
	}
	
	printf("The largest element is %d",max);
	
	//getch();
	
	return 0;
 	
 }
 
