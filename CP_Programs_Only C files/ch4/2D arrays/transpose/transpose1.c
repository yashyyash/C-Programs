
  //W.A.P to find the transpose of a Matrix using another array
  
  #include<stdio.h>
  //#include<conio.h>
  
  int main()
  {
  	int a[10][10],t[10][10],r,c,i,j;
  	//clrscr();
  	
  	printf("Enter Order of Matrix(r*c) ");
  	scanf("%d %d",&r,&c);
  	
  	printf("Enter Array elements\n");
  	for(i=0;i<r;i++)
  	{
  		for(j=0;j<c;j++)
  		{
  			scanf("%d",&a[i][j]);
		}
	}
	
	//Transpose Logic
	for(i=0;i<r;i++)
  	{
  		for(j=0;j<c;j++)
  		{
  			t[j][i]=a[i][j];
		}
	}
	
	//Display the Transpose Matrix
	printf("The Transpose is\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d\t",t[i][j]);
		}
		printf("\n");
	}
	//getch();
	
	return 0;
  }
