
   //W.A.P to accept a string & check its Palindrome String or not.   
   //Examples : nitin,madam
   
   //Solution 2 : without using string.h functions
   
   #include<stdio.h>  
   //#include<conio.h>
   
   int main()
   {
   	    char str[10];
   	    int i,j,l,flag=1;
   	    
   	    
   	    printf("Enter a string ");
   	    gets(str);  //scanf("%s",str);
   	    
   	    //to calculate the length of given string
		//for(i=0;str[i]!='\0';i++);
		
		for(i=0;str[i]!='\0';i++)
		{
		   //blank body
		}
		
		l=i-1;
		
		for(i=0,j=l;i<j;i++,j--)
		{
			if(str[i]!=str[j])
			{
				flag=0;
				break;
			}			
		}  	    
   	    
   	    if(flag==1)
   	       printf("String is Palindrome");
   	    else 
   	       printf("String is not Palindrome");
   	       
   	       
   	    //getch();   	    
   	    return 0;
  }
