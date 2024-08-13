

   #include<stdio.h>
   //#include<conio.h>
   
   /* in  TC int consumes 2 bytes and float consumes 4 bytes   */
   
   int main()
   {
   	 int a,b;
   	 float c;
   	 //clrscr();
   	 
   	 printf("Enter 2 integers ");
   	 scanf("%d %d",&a,&b);
   	 
   	 c=a/(float)b; //int/int is always an int result
   	 
   	 printf("Division is %f",c);
   	 
   	 //getch();
   	 return 0;
   }
