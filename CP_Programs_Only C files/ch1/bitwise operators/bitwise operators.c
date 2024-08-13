
 //W.A.P to demonstrate the Bitwise Operators 

 #include <stdio.h> 
 //#include<conio.h>

 int main() 
 { 
    // a=5(00000101),b=9(00001001) 
    unsigned char a=5,b=9; 
    //clrscr();
  
    //The result of & is 00000001 
    printf("a=%d,b=%d\n",a,b); 
    printf("a&b=%d\n",a&b); 
  
    //The result of | is 00001101 
    printf("a|b=%d\n",a|b); 
  
    //The result of ^ is 00001100 
    printf("a^b=%d\n",a^b); 
  
    //The result of ~ is 11111010 
    printf("~a=%d\n",a=~a); 
  
    //The result is << is 00010010 where b=9(00001001) 
    printf("b<<1=%d\n",b<<1); 
  
    //The result of >> is 00000100 a=5(00000101)
    printf("b>>1=%d\n",b>>1); 
  
    //getch();
	return 0; 
 }


