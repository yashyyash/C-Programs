
   //W.A.P to accept a string & check its Palindrome String or not.   
   //Examples : nitin,madam
   
   //Solution 1 : using string.h functions
   
   #include<stdio.h>
   #include<string.h>
   //#include<conio.h>
   
   int main()
   {
   	    char str[10],rev[10];  //1. 2 strings declared
   	    int r;  //to store the result of comparison ie return value of strcmp()
   	    //clrscr();
   	    
   	    //2. string accepted from the user
   	    printf("Enter a string ");
   	    gets(str);  //scanf("%s",str);
   	    
   	    //3. copy the user string into another string (rev)
   	    strcpy(rev,str);
   	    
   	    //4. reverse the string
   	    strrev(rev);
   	    
   	    //5. comparing the 2 strings
   	    r=strcmpi(str,rev);
   	    
   	    if(r==0)
   	       printf("String is Palindrome");
   	    else 
   	       printf("String is not Palindrome");   	       
   	       
   	    //getch();   	    
   	    return 0;
  }
