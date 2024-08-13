
 /*W.A.P to concatenate two strings without using strcat()*/

 #include<stdio.h>
 //#include<conio.h>
 
 void concat(char s1[],char s2[]);  //Fun Declr
 //void concat(char [],char []);
 //void concat(char *,char *);

 int main()
 {
   char str1[100],str2[100];   

   printf("Enter a string ");
   gets(str1);
   printf("Enter a string to be concatenated ");
   gets(str2);

   concat(str1,str2);  //Func Calling

   printf("String 1 is %s and String 2 is %s",str1,str2);

   
   //getch();
   return 0;
 }
  
  /* Note : s1 and s2 are dummy char arrays but internally
            converted to char *s1,*s2; //char pointers */

  void concat(char s1[],char s2[])  //Func Defn
  {
   int lens1,lens2;

   lens1=0; 
   
   //to calculate the length
   //for(lens1=0;s1[lens1]!='\0';lens1++); 
   
   for(lens1=0;s1[lens1]!='\0';lens1++)
   {
   	  //blank body
   }

   lens2=0;

   while(s2[lens2]!='\0')
   {
      s1[lens1]=s2[lens2];
      lens1++;
      lens2++;
   }

   s1[lens1]='\0';
 }

 
