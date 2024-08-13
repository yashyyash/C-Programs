
  /*W.A.P to accept radius(assume its an int value) of a Circle from the user
    and calculate its Area & Circumference and display it on Console*/
    
  //SOLUTION 2 : Using 3 variables & pow() of math.h
  
  #include<stdio.h>
  //#include<conio.h>
  #include<math.h>
  
  int main()
  {
  	int rad;
  	float ar,circ;
  	//clrscr();
  	
  	printf("Enter Radius ");
  	scanf("%d",&rad);
  	  	
  	ar=3.14*pow(rad,2);
  	circ=2*3.14*rad;  	
  	
  	printf("Area of Circle is %f",ar);
  	printf("\nCircumference of Circle is %f",circ);
  	
  	//getch();  	
  	return 0;
}  
    
   
