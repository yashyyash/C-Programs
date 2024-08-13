#include<stdio.h>

int main()
{
	char str[10];
	int i;
	
	printf("Enter a string ");
	scanf("%s",str);  //or scanf("%d",&str);
	
	for(i=0;str[i]!='\0';i++); //to calculate the length
	
	printf("The reverse string is ");
	for(i=i-1;i>=0;i--)
	  printf("%c",str[i]);	
	
	return 0;
}
