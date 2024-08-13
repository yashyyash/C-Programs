 
 /* W.A.P using User Defined Function to calculate the length of a string
    ie dont use string.h*/
 
 #include<stdio.h>
 //#include<conio.h>
 
 int stringlen(char x[]); //Fun Declr 

 int main()
 {
	char str[10];	
	//clrscr();
	
	printf("Enter a string ");
	gets(str);	
	
	printf("Length is %d",stringlen(str)); //Function call	
	
	//getch();
	return 0;
 }
 
 //Note : x is a dummy char array but internally converted to char *x; //char pointer 
 
 int stringlen(char x[])  //Fun Defn
 {
 	
 	int i,l=0;  //frequency count or counter variable
 	
 	for(i=0;x[i]!='\0';i++)   //or x[i]!=0(ASCII Value)
	    l++;
	    
	return l; 	
 }
