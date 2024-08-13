
   /*W.A.P to reverse a string without using strrev() */
  
  #include<stdio.h>

 int main()
 {
	char str[10];
	int i,j;
	
	printf("Enter a string ");
	scanf("%s",str);  
	
	//for(i=0;str[i]!='\0';i++); 
	
	//to calculate the length
	
	for(i=0;str[i]!='\0';i++)
	{
		//Blank Body
	}
	
	for(j=i-1;j>=0;j--)
	  printf("%c",str[j]);	
	
	return 0;
}
