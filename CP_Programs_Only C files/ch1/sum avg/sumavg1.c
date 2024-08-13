
  //W.A.P to accept 3 integers then display their sum & average
  
  //Solution 1 : using 5 variables
  
  #include<stdio.h>
  //include<conio.h>
  
  int main()
  {
  	int n1,n2,n3,sum;
  	float avg;
  	//clrscr();
  	
  	printf("Enter 3 numbers ");
  	scanf("%d %d %d",&n1,&n2,&n3);
  	
    sum=n1+n2+n3;
    avg=sum/3.0;  //int/float --> float
    
    printf("Sum is %d",sum);
    printf("\nAverage is %f",avg);
    
    //getch();    
    return 0;
 }
