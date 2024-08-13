
 
  /* W.A.P to accept a character from the user & check whether its a vowel or not.
     Assume that the user will input CAPTIAL LETTER ONLY */
     
     //Solution 1
     
    #include<stdio.h>
    //#include<conio.h>
    
    int main()
    {
    	char ch;
    	//clrscr();
    	
    	printf("Enter a character ");
    	scanf("%c",&ch);
    	
    	if(ch=='A')
    	   printf("Its a Vowel");
        else if(ch=='E')
    	   printf("Its a Vowel");
    	else if(ch=='I')
    	   printf("Its a Vowel");
    	else if(ch=='O')
    	   printf("Its a Vowel");
    	else if(ch=='U')
    	   printf("Its a Vowel");
    	else
    	   printf("Its not a Vowel");
    	   
    	//getch();
		return 0;   
      }
