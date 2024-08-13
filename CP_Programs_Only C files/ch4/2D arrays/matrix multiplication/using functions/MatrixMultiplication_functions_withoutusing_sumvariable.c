 // Matrix Multiplication       

 #include<stdio.h>
 
 void read(int m[10][10],int r,int c);
 void display(int m[10][10],int r,int c); 
 void mul(int m1[10][10],int m2[10][10],int m3[10][10],int r1,int c1,int r2,int c2);
  
 int main()
 {
	int a[10][10],b[10][10],c[10][10];
	int r1,c1,r2,c2,i,j,k;

	printf("\nEnter Order of Matrix a (r x c) ");
	scanf("%d %d",&r1,&c1);

	printf("Enter Order of Matrix b (r x c) ");
	scanf("%d %d",&r2,&c2);

	 /* If columns of first matrix is equal to rows of second matrix,
	    perform multiplication*/ 	   
	if(c1==r2) 
	{
	   printf("Enter elements of Matrix a \n");
	   read(a,r1,c1);

	   printf("Enter the elements of Matrix b \n");
	   read(b,r2,c2);
	   
	   mul(a,b,c,r1,c1,r2,c2);
       
	   printf("Multiplication of 2 Matrices is \n");
	   display(c,r1,c2);

     
  }//end of if
  else
  {
  	printf("\nMultiplication is not Possible");
  }
  return 0;
 } //end of main()
 
 void read(int m[10][10],int r,int c)
 { 	
       int i,j;
   
	   for(i=0;i<r;i++)
       {
         for(j=0;j<c;j++)
         {
          printf("Enter a value ");
          scanf("%d",&m[i][j]);
         }
       } 
 }
  void display(int m[10][10],int r,int c)
  {
  	int i,j;
  	
  	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		   printf("%d\t",m[i][j]);
		
		printf("\n");
	}  	
  	
   } 
 	
 
 void mul(int m1[10][10],int m2[10][10],int m3[10][10],int r1,int c1,int r2,int c2)
 {
       int i,j,k;
 
 	   //Multiplication Logic 
	   for(i=0;i<r1;i++) //To manage the no of rows
	   {
		  for(j=0;j<c2;j++) //To manage the no of cols
		  {
		     m3[i][j]=0; //IMP  //OR m3[i][j]=0;
		     for(k=0;k<c1;k++) 
			 //OR k<r2 To manage no of times multiplication to be done. 
		     {                  
			   m3[i][j]=m3[i][j]+m1[i][k]*m2[k][j];  //IMP
		     }//end of k loop
 		  }//end of j loop
	 } //end of i loop
 	
 }
 
 
 
 
 
  
 
 
	

