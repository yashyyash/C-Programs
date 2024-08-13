
   /* W.A.P to accept 3 angles from the user & check whether they make up a 
      valid triangle or not. Assume that the input given by the user will be 
      greater than 0 */
      
    #include<stdio.h>
    //#include<conio.h>
    
    int main()
    {
    	int a,b,c;
    	//clrscr();
    	
    	printf("Enter 3 angles ");
    	scanf("%d %d %d",&a,&b,&c);
    	
    	if(a+b+c==180)
           printf("It's a valid triangle");
        else
           printf("It's not a valid triangle");
    	
    	//getch();
    	return 0;
    }
