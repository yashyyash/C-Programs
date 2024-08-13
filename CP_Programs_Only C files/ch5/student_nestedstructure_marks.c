#include<stdio.h>

struct student
{
	char n[30];
	int rno;
    struct studentmarks marks;	
	int tmarks;
	
};

//Way 2 of using nested structure concept declaring another structure separately

struct studentmarks
{
    	int p;
    	int c;
    	int m;
};

int main()
{
	int n,i;
	struct student s[50];
	
	printf("For how many students records to be stored ? ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
	  fflush(stdin);
	  printf("Enter name,roll number,marks of PCM of student %d ",
	  i+1);
	  gets(s[i].n);
	  scanf("%d %d %d %d",&s[i].rno,&s[i].marks.p,&s[i].marks.c,
	  &s[i].marks.m);
	  
	  s[i].tmarks=s[i].marks.p+s[i].marks.c+s[i].marks.m;
	}
	
	printf("Name\t RollNo\t TotalMarks\n");	
	for(i=0;i<n;i++)
	  printf("%s\t %d\t %d\t\n",s[i].n,s[i].rno,s[i].tmarks);
    
	return 0;
}
