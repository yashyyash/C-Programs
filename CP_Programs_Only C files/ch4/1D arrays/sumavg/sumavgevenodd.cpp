
  /*W.A.P to accept n array elements from the user & calculate the
    sum of even numbers as well as the sum of odd numbers of the array 
    separately along with their average */
  
  #include<stdio.h>
  //#include<conio.h>
  
  int main()
  {
  	int a[50],i,n,sume=0,sumo=0,e=0,o=0; //Array Declr
  	//sume=sumo=e=o=0;
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
  		{
	         sume=sume+a[i];
	         e++;
	    }
  		    
  		else
  		{
	       sumo=sumo+a[i];
	       o++;
	    }
  		    
  	}
		
	printf("Sum of even numbers is %d,Avg is %f,Count is %d\n",sume,(float)sume/e,e);
    printf("Sum of odd numbers is %d,Avg is %f,Count is %d",sumo,(float)sumo/o,o);
	
	//getch();
	
	return 0;
  }
