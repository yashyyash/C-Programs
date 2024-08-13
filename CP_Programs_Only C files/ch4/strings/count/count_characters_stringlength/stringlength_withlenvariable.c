#include<stdio.h>

int main()
{
	char str[10];
	int i,len=0;  //frequency count or counter variable
	
	printf("Enter a string ");
	gets(str);
	
	for(i=0;str[i]!='\0';i++)   //or str[i]!=0
	{
		len++;
	}
	
	printf("Length is %d",len);
	
	return 0;
}
