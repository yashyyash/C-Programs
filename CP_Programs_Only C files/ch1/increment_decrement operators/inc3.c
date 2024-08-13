/* mixed expressions : 
  use of assignment operator,arithmetic & post & pre operators */


 #include<stdio.h>
 
 int main()
 {
 	int a,b=10,c=5; 	
 	a=b++ + c; 	
 	printf("1)%d\n%d\n%d\n",a,b,c); 	 	
 	 		
 	a=0,b=10,c=5; 	
 	a=b++ + c++;
 	printf("2)%d\n%d\n%d\n",a,b,c);	
 		
  	a=0,b=10,c=5;
 	a=b++ + ++c;
 	printf("3)%d\n%d\n%d\n",a,b,c);		
 	  	 		 	
	a=0,b=10,c=5;
 	a=++b + ++c;
 	printf("4)%d\n%d\n%d",a,b,c);
 	
 	return 0;
 }
 	
 	
