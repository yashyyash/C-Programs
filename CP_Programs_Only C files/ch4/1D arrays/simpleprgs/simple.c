


  //W.A.P to accept 5 array elements & display it on the Console
  
  #include<stdio.h>
  //#include<conio.h>
  
  int main()
  {
  	int a[5],i; //Array Declr
  	//clrscr();
  	
  	//Reading array elements
  	for(i=0;i<5;i++) //i<=5
  	{
  		printf("Enter a number ");
  		scanf("%d",&a[i]);
	}
		
	
	//Displaying the array elements
	for(i=0;i<5;i++)
	{
	   printf("%d\n",a[i]);
	}
	
	//getch();
	
	return 0;
  }
