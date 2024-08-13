

 //W.A.P to accept a string & count the number of vowels in the string.
 //without using ch
 
 #include<stdio.h>
 //#include<conio.h>
 
 int main()
 {
 	char str[10];
 	int count=0,i;
 	//clrscr();
 	
 	printf("Enter a string ");
 	scanf("%s",str);
 	
 	for(i=0;str[i]!='\0';i++)
 	{
 		switch(str[i])
 		{
 			case 'A' : case 'E' : case 'I' : case 'O' : case 'U' :
 			case 'a' : case 'e' : case 'i' : case 'o' : case 'u' :
 				 count++;
		 }
	 }
	 
	 printf("The total vowels is %d",count);
	 
	 //getch();
	 
	 return 0;
 }
