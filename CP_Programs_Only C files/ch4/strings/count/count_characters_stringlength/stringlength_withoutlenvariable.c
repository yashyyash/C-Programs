#include<stdio.h>

int main()
{
	char str[10];
	int i;
	
	printf("Enter a string ");
    gets(str);  
	
	for(i=0;str[i]!='\0';i++); 
	
	/*
	for(i=0;str[i]!='\0';i++)
	{
		Blank Body
	}*/
	
	printf("Length is %d",i);
	
	return 0;
}
