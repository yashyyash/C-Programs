/*
     * C program to accept a matrix of order M x N and find the sum
     * of each row and each column of a matrix
     */
 
    #include <stdio.h>
    void main ()
    {
 
        static int a[10][10];
        int i,j,m,n,sum=0;
 
        printf("Enter the order of the matrix\n");
        scanf("%d %d",&m,&n);
 
        printf("Enter the co-efficients of the matrix\n");
        for(i=0;i< m; ++i)
        {
            for (j = 0; j < n; ++j) 
            {
                scanf("%d", &a[i][j]);
            }
        }
 
        for (i = 0; i < m; ++i) 
        {
            for (j = 0; j < n; ++j) 
            {
                sum = sum + a[i][j] ;
            }
 
            printf("Sum of the %d row is = %d\n", i, sum);
            sum = 0;
 
        }
        sum = 0;
        for (j = 0; j < n; ++j) 
        {
            for (i = 0; i < m; ++i)
            {
                sum = sum + a[i][j];
            }
 
            printf("Sum of the %d column is = %d\n", j, sum);
            sum = 0;
 
        }
 
    }
