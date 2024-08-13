   /* W.A.P to store the information of a person ie his name "OR" 
   id number using Union concept for 
   which the user is given a choice */    

#include<conio.h>
#include<stdio.h>

union info  //Union Delcared and Defined
{
	char name[20];
	long int id;
};


int main ()
{
	union info i1;
    int choice;
	system("color f0");
	
	printf("\n Enter your information \n1. Name  \n2.ID number  \nEnter your choice:");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:	printf("\n Enter your name:");
			    scanf("%s",i1.name);
			    break;
		case 2:	printf("\n Enter your ID number:");
			    scanf("%ld",&i1.id);
			    break;
		default:printf("Invalid Choice");
	}
	if(choice==1)
     	printf("\n Your Entered Name is %s",i1.name);
	else if(choice==2)
	    printf("\n Your Entered ID number is %ld",i1.id);
	    
	return 0;
}
