
 
  /* W.A.P to accept a character from the user & check whether its a vowel or not.
     Assume that the user will input CAPTIAL LETTER ONLY */
     
     //Solution 2
     
    #include<stdio.h>
    //#include<conio.h>
    
    int main()
    {
    	char ch;
    	//clrscr();
    	
    	printf("Enter a character ");
    	scanf("%c",&ch);
    	
    	if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    	   printf("Its a Vowel");        
    	else
    	   printf("Its not a Vowel");
    	   
    	//getch();
		return 0;   
      }
