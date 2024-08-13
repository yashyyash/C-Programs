


  /*W.A.P to accept n array elements from the user & calculate the
    sum of even numbers as well as the sum of odd numbers of the array 
    separately */
  
  #include<stdio.h>
  //#include<conio.h>
  
  int main()
  {
  	int a[50],i,n,sume=0,sumo=0; //Array Declr
  	//clrscr();  	
  	
  	printf("How many array elements? ");
  	scanf("%d",&n);
  	
  	//Reading array elements
  	for(i=0;i<n;i++) //i<=n
  	{
  		printf("Enter a number ");
  		scanf("%d",&a[i]);
  		
  		//Check array element is even or odd
  		if(a[i]%2==0)
  		    sume=sume+a[i];
  		else
  		    sumo=sumo+a[i];
  	}
		
	printf("Sum of even is %d\n",sume);
	printf("Sum of odd is %d\n",sumo);
	
	//getch();
	
	return 0;
  }
