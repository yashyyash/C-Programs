

/* W.A.P to accept details for Cricketer structure & display details in the ascending order of 
   their batting average */

#include<stdio.h>

struct cricketer
{
  char pn[30],cn[30];
  int mp,r;
  float ba;	
};

int main()
{
	int n,i,j;
	
	struct cricketer c[50],temp;  //temp of structure type
	
    printf("How many cricketer records you want to store? ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
	 printf("Enter name,countryname,matches played,total runs scored of cricketer %d ",i+1);
	 //printf("Enter details of cricketer %d",i+1);
	 fflush(stdin);
	 gets(&c[i].pn);
	 gets(&c[i].cn);
	 scanf("%d %d",&c[i].mp,&c[i].r);
	 
	 c[i].ba=((float)c[i].r)/c[i].mp;  //IMP. for calculating batting average 	 
    }
    
    ///Main Logic - Sorting
		for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;j++) //j<=n-1
			{
    	 	  if(c[i].ba>c[j].ba)
    		 {
    			temp=c[i];
    			c[i]=c[j];
    			c[j]=temp;
			 }
		}
	}
	
    printf("The details of cricketers are as follows : \n");
	for(i=0;i<n;i++)
	{
      printf("%s\t %s\t %d\t %d\t %f\n",c[i].pn,c[i].cn,
	  c[i].mp,c[i].r,c[i].ba);
    }
    
    return 0;
}
