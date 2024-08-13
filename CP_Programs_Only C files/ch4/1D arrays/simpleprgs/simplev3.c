


  /*W.A.P to accept n array elements & display it on the Console.
    Note : we can write variable name in size of array in compilers like DevC++ and not in TC */
  
  #include<stdio.h>
  //#include<conio.h>
  
  int main()
  {
  	int i,n;	
  	//clrscr();  	
  	
  	printf("How many array elements? ");
  	scanf("%d",&n);
  	
  	int a[n]; //Array Declr (not allowed in TC)
  	
  	//Reading array elements
  	for(i=0;i<n;i++) //i<=n
  	{
  		printf("Enter a number ");
  		scanf("%d",&a[i]);
	}
		
	//Displaying the array elements
	for(i=0;i<n;i++)
	{
	   printf("%d\n",a[i]);
	}
	
	//getch();
	
	return 0;
  }
