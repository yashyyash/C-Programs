
  //W.A.P to accept 3 integers then display their sum & average
  
  //Solution 3 : Using only 3 variables
  
  #include<stdio.h>
  //include<conio.h>
  
  int main()
  {
  	int n1,n2,n3;  
  	//clrscr();
	    	
  	printf("Enter 3 numbers ");
  	scanf("%d %d %d",&n1,&n2,&n3); 	   
    
    printf("Sum is %d",(n1+n2+n3));
    printf("\nAverage is %f",(n1+n2+n3)/3.0);
    
    //getch();    
    return 0;
 }
