   
   
   /*W.A.P to declare structure Employee which has following 
     data members : Name,Age,Salary, Store the details of n employees
     and only display the records in the ascending order of age
	 */
     
     #include<stdio.h>
     //#include<conio.h>
     
     struct employee
     {
     	char n[20];  //char array (string)
     	int age;
     	float sal;
     }; 
     
     //Size of each structure variable will be (TC) : 20B+2B+4B=26B
     
     /*
     struct employee
     {
     	char n[20];  //char array (string)
     	int age;
     	float sal;
     }struct employee e[50]; */
     
     int main()
     {
     	int n,i,j;
     	//clrscr();     	
        struct employee e[50],temp;  //Array of structure
        
        printf("How many employee records you want to store? ");
        scanf("%d",&n);
        
        for(i=0;i<n;i++)
        {
        	printf("Enter name,age & salary of employee %d",i+1);
			fflush(stdin); //clear the buffer       	
        	gets(e[i].n); //scanf("%s",e[i].n);
        	scanf("%d %f",&e[i].age,&e[i].sal);
        }
        
        //Sorting Logic
        
        //Main Logic - Sorting
		for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;j++) //j<=n-1
			{
				//Swapping logic
				if(e[i].age>e[j].age)  //for descending the only change is if(a[i]<a[j])
				{
				  temp=e[i];
				  e[i]=e[j];
				  e[j]=temp;
				} //end of if
			} //end of inner loop (j loop)
		} //end of outer loop (i loop)
        
        
        
        
        
        
        
        printf("The details of employees are as follows \n");
        for(i=0;i<n;i++)
        {
          printf("%s\t%d\t%f\n",e[i].n,e[i].age,e[i].sal);
		}
		
		//getch();		
		return 0;        
    }
