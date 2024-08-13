

   #include<stdio.h>
   //#include<conio.h>
   
   /* in  TC int consumes 2 bytes and float consumes 4 bytes   */
   
   int main()
   {
   	 float a,b,c;
   	
   	 //clrscr();
   	 
   	 printf("Enter 2 floats ");
   	 scanf("%f %f",&a,&b);
   	 
   	 c=(int)a%(int)b; 
   	 
   	 printf("Remainder is %f",c);
   	 
   	 //getch();
   	 return 0;
   }
