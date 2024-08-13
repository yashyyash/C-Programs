
 //W.A.P to accept roll number and display it on the console

 #include<stdio.h>
 //#include<conio.h>
 
 int main()
 {
 	int rno;  //Variable Declaration
 	//clrscr();
 	
 	printf("Enter your Roll Number ");
 	scanf("%d",&rno); //&(ampersand) : Address of Operator
 	//%d or %i : format specifier (special symbol)
 	//& address of rno variable which is 5000
 	printf("Your Roll Number is %d",rno); 	
 	
  	//getch();
  	return 0;
 }
