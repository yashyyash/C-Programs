

   //W.A.P to demonstrate the use of pointers
   
   #include<stdio.h>
   //#include<conio.h>
   
   int main()
   {
   	 int x=50;
   	 int *p; //Declr of Pointer
	 p=&x;   //Initialize the pointer with the address of some variable
	 //int *p=&x; 
	 
	 char *cp;
	 
	 printf("1)%d\n",x);
	 printf("2)%u\n",&x);
	 printf("3)%u\n",p);
	 printf("4)%d\n",*p);  //*p means value at the address pointed by p
	 
	 *p=500;
	 printf("5)%d\n",x);
	 printf("6)%d\n",*p); 
	 
	 *p=*p+100;
	 printf("7)%d\n",x);
	 printf("8)%d\n",*p); 
	 
	 printf("9)%d\n",sizeof(p)); 
	 printf("10)%d\n",sizeof(cp)); 	 
	 
	 //getch();
	 return 0;
   	 
   }
