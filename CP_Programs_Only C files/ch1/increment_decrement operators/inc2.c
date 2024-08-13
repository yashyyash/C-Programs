
 //increment operator
 
 #include<stdio.h>
 
 int main()
 {
 	int x=2,y,z; 	 	 	
 	y=x++;  
 	z=++x; 	
 	printf("1)%d\n%d\n%d\n",x,y,z); 	 
	  		
 	x=2,y=0,z=0; 	
 	y=++x;  
 	z=x++; 	
 	printf("2)%d\n%d\n%d",x,y,z); 	
 		
 	return 0;
 }
 	
 	
 
