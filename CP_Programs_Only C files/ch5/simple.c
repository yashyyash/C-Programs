
   //W.A.P to create a structure Student & store rollnumber,grade & percentage of a student

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

   s.rollno=1234;
   s.grade='A';
   s.per=76.5;

   printf("Rollno is %d,Grade is %c,percentage is %f",s.rollno,s.grade,s.per);

   //getch();

   return 0;
  }
