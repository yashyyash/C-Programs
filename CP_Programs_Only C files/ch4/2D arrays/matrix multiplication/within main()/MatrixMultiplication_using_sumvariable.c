 // Matrix Multiplication       

 #include<stdio.h>
  
 int main()
 {
	int a[10][10],b[10][10],c[10][10];
	int r1,c1,r2,c2,i,j,k,sum;

	printf("\nEnter Order of Matrix a (r x c) ");
	scanf("%d %d",&r1,&c1);

	printf("Enter Order of Matrix b (r x c) ");
	scanf("%d %d",&r2,&c2);

	 /* If columns of first matrix is equal to rows of second matrix,
	    perform multiplication*/ 	   
	if(c1==r2) 
	{
	   printf("\nEnter elements of Matrix a \n");
	   for(i=0;i<r1;i++)
       {
         for(j=0;j<c1;j++)
         {
          scanf("%d",&a[i][j]);
         }
       } 

	   printf("\nEnter the elements of Matrix b \n");
	   for(i=0;i<r2;i++)
       {
         for(j=0;j<c2;j++)
         {
           scanf("%d",&b[i][j]);
         }
       }  

       //Multiplication Logic 
	   for(i=0;i<r1;i++) //To manage the no of rows
	   {
		  for(j=0;j<c2;j++) //To manage the no of cols
		  {
		     sum=0; //IMP  //OR c[i][j]=0;
		     for(k=0;k<c1;k++) 
			 //OR k<r2 To manage no of times multiplication to be done. 
		     {                  
			   sum=sum+a[i][k]*b[k][j];  //IMP
		     }//end of k loop
		     c[i][j]=sum;
		 } //end of j loop
	 } //end of i loop
	
	printf("Multiplication of 2 Matrices is \n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		  printf("%d\t",c[i][j]);
		
		printf("\n");
	}
     
  }//end of if
  else
  {
  	printf("\nMultiplication is not Possible");
  }
  return 0;
 } //end of main()
 
 
  
 
 
	

