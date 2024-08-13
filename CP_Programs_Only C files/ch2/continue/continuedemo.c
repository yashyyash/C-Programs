
 
 //W.A.P to demonstrate the use of continue; in loops
 
 #include<stdio.h>

 int main()
 {
	int i;
	//clrscr();
	
	for(i=1;i<=10;i++)
	{
		if(i==4)
		  continue;
		  
		printf("%d\n",i);
	}
	//getch();
	return 0;
 }
 
 /* output :
    1
    2
	3
	5
	6
	7
	8
	9
	10 */ 
  
