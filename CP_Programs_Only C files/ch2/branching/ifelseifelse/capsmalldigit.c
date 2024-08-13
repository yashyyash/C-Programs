
  /* W.A.P to accept a character from the user & check whether its a 
     Captial letter or Small Letter or Digit or something else 
	 
	 A-65,Z-90
	 a-97,z-122
	 0-48,9-57
	 */
     
   //Solution 1
     
   #include<stdio.h>  
   //#include<conio.h>
   
   int main()
   {
   	char ch;
   	//clrscr();
   	
   	printf("Enter a character ");
   	scanf("%c",&ch);
   	
   	if(ch>=65 && ch<=90)
   	   printf("It's a Capital letter");
   	else if(ch>=97 && ch<=122)
   	   printf("It's a Small letter");
   	else if(ch>=48 && ch<=57)
   	   printf("It's a Digit");
   	else
   	   printf("Its something else");
   	   
    //getch();
    return 0;
  }
