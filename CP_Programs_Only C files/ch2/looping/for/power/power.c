
  
  /* W.A.P for x^y  */ 
    
   
   #include<stdio.h>
   //#include<conio.h>
   
   int main()
   {
   	int x,y,i;
   	long int r=1;
   	//clrscr();
   	
   	printf("Enter the base & power ");
   	scanf("%d %d",&x,&y);
   	
   	for(i=1;i<=y;i++)
   	{
   	    r=r*x;	
	}
	
	printf("%d raise to %d is %ld",x,y,r);
	//getch();
	
	return 0;
  }
