/* variation 1 in for loop : all sections ignored but writing 2 ; is must

   Display numbers from given number till 1 (reverse order)*/

#include<stdio.h>

int main()
{
	int n;
	
	printf("Enter a number ");
	scanf("%d",&n);
	
	for(;;) //NOTE : when no condition exist it means condition is always 1 (true)
	{
		if(n<=0)
		  break;
		
		printf("%d\n",n);
		n--;
	}
	
	return 0;
}
