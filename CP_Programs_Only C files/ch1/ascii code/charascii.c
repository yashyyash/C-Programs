 
  
    /* W.A.P to accept a char from the user & print its char value(char constant)
       and its ASCII value on Console */
            
    #include<stdio.h>
    //#include<conio.h>
    
    int main()
    {
    	char ch;
    	//clrscr();
    	
    	printf("Enter a character ");
    	scanf("%c",&ch);
    	
    	printf("Character is %c",ch);
    	printf("\nIts ASCII Code is %d",ch);
    	
    	//getch();    	
    	return 0;
	}
