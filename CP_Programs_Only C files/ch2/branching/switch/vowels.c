
 /* W.A.P to accept a character from the user & check whether its a vowel or not. */
 
 #include<stdio.h>
 //#include<conio.h>
 
 int main()
 {
 	char ch;
 	//clrscr();
 	
 	printf("Enter a character ");
 	scanf("%c",&ch);
 	
 	switch(ch)
 	{
 		case 'A': 	case 'E': 	case 'I': 	case 'O': 	case 'U':
	    case 'a': 	case 'e': 	case 'i': 	case 'o': 	case 'u':	
 	                                                              printf("Vowel Character"); 
		                                                          break; 	
 	   default :
 	           printf("Its not a Vowel Character");
 	}
 	 	   
    //getch();
    return 0;
}
