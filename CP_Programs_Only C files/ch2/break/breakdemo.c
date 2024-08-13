
 
 //W.A.P to demonstrate the use of break; in loops
 
 #include<stdio.h>

 int main()
 {
	int i;
	//clrscr();
	
	for(i=1;i<=10;i++)
	{
		if(i==4)
		  break;
		  
		printf("%d\n",i);
	}
	//getch();
	return 0;
 }
