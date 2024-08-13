
  /* W.A.P to accept a character from the user & check whether its a 
     Captial letter or Small Letter or Digit or something else 
	 
	 A-65,Z-90
	 a-97,z-122
	 0-48,9-57
	 */
     
    //Solution 2  
   #include<stdio.h>  
   //#include<conio.h>
   
   int main()
   {
   	char ch;
   	//clrscr();
   	
   	printf("Enter a character ");
   	scanf("%c",&ch);
   	
   	if(ch>='A' && ch<='Z')
   	   printf("It's a Capital letter");
   	else if(ch>='a' && ch<='z')
   	   printf("It's a Small letter");
   	else if(ch>='0' && ch<='9')
   	   printf("It's a Digit");
   	else
   	   printf("Its something else");
   	   
    //getch();
    return 0;
  }
