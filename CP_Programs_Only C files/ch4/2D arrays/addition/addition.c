
  //W.A.P for Array Addition
  
  #include<stdio.h>
  //#include<conio.h>
  
  int main()
  {
  	int a[10][10],b[10][10],c[10][10],i,j,r1,c1,r2,c2;
  	//clrscr();
  	
  	printf("Enter order of Matrix A(r*c) ");
  	scanf("%d %d",&r1,&c1);
  	
  	printf("Enter order of Matrix B(r*c) ");
  	scanf("%d %d",&r2,&c2);
  	
  	if(r1==r2 && c1==c2)
  	{
  		printf("Enter elements of Matrix A\n");
  		for(i=0;i<r1;i++)
  		{
  			for(j=0;j<c1;j++)
  			{
  				scanf("%d",&a[i][j]);
			}
		}
		
		printf("Enter elements of Matrix B\n");
  		for(i=0;i<r2;i++)
  		{
  			for(j=0;j<c2;j++)
  			{
  				scanf("%d",&b[i][j]);
			}
		}
		
		
		printf("The addition result of 2 matrices is \n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				c[i][j]=a[i][j]+b[i][j];
				printf("%d\t",c[i][j]);
			}
			printf("\n");
		}
		
	} //end of if
	else
	{
		printf("Addition is not possible");
	} //end of else
  	
  	//getch();
  	return 0;
  } //end of main()
