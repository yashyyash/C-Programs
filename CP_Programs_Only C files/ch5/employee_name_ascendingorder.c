
//W.A.P to accept details for Employee structure & display details in the ascending order of name

#include<stdio.h>
#include<string.h>

struct employee
{
	char n[20];
	int age;
	float sal;
};

int main()
{
	int n,i,j,r;  //r used to store result of comparison which can be (0/1/-1)
	struct employee e[50],temp;  //IMP : temp variable
	
	printf("How many employees records you want to store? ");
	scanf("%d",&n);	
	
	for(i=0;i<n;i++)
	{
		printf("Enter name,age & salary of employee %d ",i+1);
		//printf("Enter details of employee %d",i+1);
		fflush(stdin); //V.V.IMP
		gets(e[i].n);			
		scanf("%d %f",&e[i].age,&e[i].sal);
	}
	
	//Main Logic - Sorting
		for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;j++) //j<=n-1
			{
       			r=strcmp(e[i].n,e[j].n);       		
       			//OR if(strcmp(e[i].n,e[j].n)>0)  //no need of r       		
    			if(r>0) //string1 > string 2 - perform swapping
       			{
    			 temp=e[i];
    			 e[i]=e[j];
    			 e[j]=temp;
				}
		}
	}
	
	printf("The details of employees are as follows : \n");
	for(i=0;i<n;i++)
	   printf("%s\t %d\t %f\n",e[i].n,e[i].age,e[i].sal);   
    
    return 0;
}
