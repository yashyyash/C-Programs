
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
   struct Student s={1234,'A',76.5}; //using initializer list with structure  

   printf("Rollno is %d,Grade is %c,percentage is %f",s.rollno,s.grade,s.per);

   //getch();

   return 0;
  }
