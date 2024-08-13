
  /*W.A.P to accept radius(assume its an int value) of a Circle from the user
    and calculate its Area & Circumference and display it on Console*/
    
  //SOLUTION 3 : Using single variable & pow() of math.h
  
  #include<stdio.h>
  //#include<conio.h>
  #include<math.h>
  
  int main()
  {
  	int rad;
   	//clrscr();
  	
  	printf("Enter Radius ");
  	scanf("%d",&rad);	  	
  
  	printf("Area of Circle is %f",3.14*pow(rad,2));
  	printf("\nCircumference of Circle is %f",2*3.14*rad);
  	
  	//getch();  	
  	return 0;
}  
    
   
