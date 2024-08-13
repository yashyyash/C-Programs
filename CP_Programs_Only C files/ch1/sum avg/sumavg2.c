
   //W.A.P to accept 3 integers then display their sum & average
 
  //Solution 2 : using 4 variables
  
  #include<stdio.h>
  //include<conio.h>
  
  int main()
  {
  	int n1,n2,n3;
  	float avg;
  	//clrscr();
  	
  	printf("Enter 3 numbers ");
  	scanf("%d %d %d",&n1,&n2,&n3); 	
    
    avg=(n1+n2+n3)/3.0;
    
    printf("Sum is %d",(n1+n2+n3));
    printf("\nAverage is %f",avg);
    
    //getch();    
    return 0;
 }
