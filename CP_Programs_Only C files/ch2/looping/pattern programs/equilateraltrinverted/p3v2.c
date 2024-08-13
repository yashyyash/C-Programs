
 //Equilateral Triangle
/*
    *
   * *
  * * *
   * *
    *
 
 */
 
 #include<stdio.h>
 //#include<conio.h>
 
 int main()
 {
 	int n,r,c,s; 	
 	//clrscr();
 	
 	printf("How many rows(lines)  ");
 	scanf("%d",&n);
 	
 	//Upper Part
 	for(r=1;r<=n;r++)  //r loop
 	{
 		for(s=1;s<=n-r;s++) //s loop
 		{
 			printf(" ");
		}		
		for(c=1;c<=r;c++) //c1 loop
		{
			printf("* ");
		}		
		
		printf("\n");
	 } //end of r loop
 	

 	//Lower Part
 	for(r=n-1;r>=1;r--)  //only r loop will change
 	{
 		for(s=1;s<=n-r;s++) //s loop
 		{
 			printf(" ");
		}
		
		for(c=1;c<=r;c++) //c1 loop
		{
			printf("* ");
		}		
		
		printf("\n");
	 } //end of r loop
	 
	 //getch();
 	return 0;
 	}
