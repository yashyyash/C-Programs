#include<stdio.h>

int main()
{
	char str[10],ch;
	int i,count=0; //frequency count
	
	printf("Enter a string ");
	scanf("%s",str);  //or scanf("%d",&str);
	
	for(i=0;str[i]!='\0';i++)
	{
		ch=str[i];  //ith char of str assigned to ch variable.
		
		switch(ch)
		{
			case 'A': case 'E': case 'I': case 'O': case 'U':
 		    case 'a': case 'e': case 'i': case 'o': case 'u':
		      count++;
		}//end of switch
	} //end of for
	
	printf("The total vowels is %d",count);
		
	return 0;
}
