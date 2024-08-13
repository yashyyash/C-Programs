


  //W.A.P to accept n array elements & display it on the Console
  
  #include<stdio.h>
  //#include<conio.h>
  
  int main()
  {
  	int a[50],i,n; //Array Declr
  	//clrscr();
  	
  	
  	printf("How many array elements? ");
  	scanf("%d",&n);
  	
  	//Reading array elements
  	for(i=0;i<n;i++) //i<=n
  	{
  		printf("Enter a number ");
  		scanf("%d",&a[i]);
	}		
	
	//Displaying the array elements along with memory address of the array element
	for(i=0;i<n;i++)
	{
	   printf("%u\t%d\n",&a[i],a[i]);  
	}
	//%x or %u used to display memory address of a variable or array element
	//getch();
	
	return 0;
  }
