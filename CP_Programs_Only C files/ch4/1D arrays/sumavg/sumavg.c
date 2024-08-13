


  //W.A.P to accept n array elements & display it along with sum & average
  
  #include<stdio.h>
  //#include<conio.h>
  
  int main()
  {
  	int a[50],i,n,sum=0; //Array Declr
  	//clrscr();
  	
  	
  	printf("How many array elements? ");
  	scanf("%d",&n);
  	
  	//Reading array elements
  	for(i=0;i<n;i++) //i<=n
  	{
  		printf("Enter a number ");
  		scanf("%d",&a[i]);
  		sum=sum+a[i];
	}
		
	
	//Displaying the array elements
	for(i=0;i<n;i++)
	{
	   printf("%d\n",a[i]);  
	}
	
	
	printf("Sum is %d\n",sum);
	printf("Average is %f",(float)sum/n);
	
	//getch();
	
	return 0;
  }
