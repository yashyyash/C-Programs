
 //Equilateral Triangle
/*
    *
   ***
  *****
   ***
    *
 
 */
 
 #include<stdio.h>
 //#include<conio.h>
 
 int main()
 {
 	int n,r,c1,c2,s; 	
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
		
		for(c1=1;c1<=r;c1++) //c1 loop
		{
			printf("*");
		}
		
		for(c2=1;c2<=r-1;c2++) //c2 loop
		{
			printf("*");
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
		
		for(c1=1;c1<=r;c1++) //c1 loop
		{
			printf("*");
		}
		
		for(c2=1;c2<=r-1;c2++) //c2 loop
		{
			printf("*");
		} 
		printf("\n");
	 } //end of r loop
	 //getch();
 	return 0;
 	}
