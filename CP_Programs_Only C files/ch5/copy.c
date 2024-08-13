
   /* W.A.P to create a structure Student & store rollnumber,grade & percentage of a student
      and then copy its contents to another structure variable */
   
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
   struct Student s,p;
   //clrscr();
   
   printf("Enter rollno,grade & percentage ");
   scanf("%d %c %f",&s.rollno,&s.grade,&s.per);
   
   /*p.rollno=s.rollno;
   p.grade=s.grade;
   p.per=s.per; */
   
   p=s;
   
   printf("Rollno is %d,Grade is %c,percentage is %f",p.rollno,p.grade,p.per);

   //getch();

   return 0;
  }
