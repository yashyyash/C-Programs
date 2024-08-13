

     //Nested Structure
     
     /*W.A.P to declare structure Employee which has following 
     data members : Name,Age,Salary,date of joining,use concept of nested structure 
	 Store the details of n employees and display all the details on the console */
     
     #include<stdio.h>
     //#include<conio.h>
     
     struct employee //Outer Structure
     {
     	char n[20];  //char array (string)
     	int age;
     	float sal;
     	
     	     struct date  //Inner Structure
     	     {
     	     	int m;
     	     	int d;
     	     	int y;
			}doj;  //compulsory write the structure variablename of inner structure
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
     	int n,i;
     	//clrscr();     	
        struct employee e[50];  //Array of structure
        
        printf("How many employee records you want to store? ");
        scanf("%d",&n);
        
        for(i=0;i<n;i++)
        {
        	printf("Enter name,age,salary & DOJ(mm/dd/yyyy) of employee %d",i+1);
			fflush(stdin); //clear the buffer       	
        	gets(e[i].n); //scanf("%s",e[i].n);
        	scanf("%d %f %d %d %d",&e[i].age,&e[i].sal,&e[i].doj.m,&e[i].doj.d,&e[i].doj.y);
        	//outerstructvariable.innerstructurevariable.membername;
        }
        
        printf("The details of employees are as follows \n");
        for(i=0;i<n;i++)
        {
          printf("%s\t%d\t%f\t %d-%d-%d\n",e[i].n,e[i].age,e[i].sal,e[i].doj.m,e[i].doj.d,e[i].doj.y);
		}
		
		//getch();		
		return 0;        
    }
