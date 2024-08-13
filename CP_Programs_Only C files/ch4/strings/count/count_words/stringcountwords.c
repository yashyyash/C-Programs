
 //W.A.P to count number of words in a given string

 #include<stdio.h>
 //#include<conio.h>

 int main()
 {
	char str[10];
	int i,count=0;  //frequency count or counter variable
	
	printf("Enter a string ");
	gets(str);
	
	for(i=0;str[i]!='\0';i++)   //or str[i]!=0
	{
		if(str[i]==' ')  //check the spaces and increment count by 1
		  count++;
	}
	
	printf("Total words is %d",count+1);  //IMP or start from count=1
	
	//getch();
	return 0;
 }
