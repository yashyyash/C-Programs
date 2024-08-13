
   //W.A.P to demonstrate the concept of structure of array & store details of 3 students

   #include<stdio.h>
   //#include<conio.h>
   
   struct Student
  {
     int rollno;
     char grade;
     float per;
  };
   
   
  int main()
  {
   struct Student s[3];
   int i;
   //clrscr();
   
   for(i=0;i<3;i++)
   {
   	 printf("Enter rollno,grade & percentage ");
     scanf("%d %c %f",&s[i].rollno,&s[i].grade,&s[i].per);
   }
     
   
   for(i=0;i<3;i++)
   {
   	printf("Rollno is %d,Grade is %c,percentage is %f",s[i].rollno,s[i].grade,s[i].per);
   }
     
   //getch();

   return 0;
  }
