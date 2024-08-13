
   /* W.A.P to create a structure Student & store rollnumber,grade & percentage of a student
      using scanf() */
   
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
   struct Student s;
   //clrscr();
   
   printf("Enter rollno,grade & percentage ");
   scanf("%d %c %f",&s.rollno,&s.grade,&s.per);
   
   printf("Rollno is %d,Grade is %c,percentage is %f",s.rollno,s.grade,s.per);

   //getch();

   return 0;
  }
