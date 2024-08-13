/* Expected Output :

**************************************************************----* (80 columns covered)
Enter 2 numbers 10
20
**************************************************************----* (80 columns covered)
Sum is 30
**************************************************************----* (80 columns covered)

 */
 
 #include<stdio.h>
 //#include<conio.h>
 
 //Function Declaration/Prototype or star();  or 
 //void star(void); -- its just a sub task 
 void star(); 
 
 int main()
 {
 	int a,b;
 	//clrscr();
 	
 	star();  //Function Call 	
 	
 	printf("Enter 2 numbers ");
 	scanf("%d %d",&a,&b);
 	
 	star();  //Function Call 
 	
 	printf("Sum is %d\n",a+b);
 	
 	star();  //Function Call 
 	
 	//getch();
	return 0; 	
 }  //end of main()
 
 //Function Definition  
 void star()  
 { //start of sub-program (sub-task)
   int i; 
   for(i=1;i<=80;i++)
      printf("*"); 
 }  //end of sub-program
 
 
