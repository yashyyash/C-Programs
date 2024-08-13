
  /*W.A.P to accept radius(assume its an int value) of a Circle from the user
    and calculate its Area & Circumference and display it on Console*/
    
  //SOLUTION 4 : Using single variable & M_PI constant of math.h
  
  #include<stdio.h>
  //#include<conio.h>
  #include<math.h>
  
  int main()
  {
  	int rad;
   	//clrscr();
  	
  	printf("Enter Radius ");
  	scanf("%d",&rad);	  	
  
  	printf("Area of Circle is %f",M_PI*pow(rad,2));
  	//NESTED FUNCTION CALL pow() is called within printf()
  	printf("\nCircumference of Circle is %f",2*M_PI*rad);
  	
  	//getch();  	
  	return 0;
}  
    
   
