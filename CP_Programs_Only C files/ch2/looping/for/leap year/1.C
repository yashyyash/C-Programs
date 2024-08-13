 /* W.C.P to check if the year entered is Leap Year or not using if-else statement
    and using Logical Operators &&,||.

  Definition :: "All years which are perfectly divisible by 4 are leap years
		        except for century years( years ending with 00 eg::2000 )
		        which is a leap year only it is perfectly divisible by 400"

 
  /*
  Simplified Logic ::
  IF year MODULER 400 IS 0
   THEN leap_year
  ELSE IF year MODULER 100 IS 0
   THEN not_leap_year
  ELSE IF year MODULER 4 IS 0
   THEN leap_year
  ELSE
   not_leap_year*/

 #include<stdio.h>
 #include<conio.h>

  int main()
  {
	int year;
		
	printf("\n Enter a Year:");
	scanf("%d",&year); 

	if(year%4==0 && year%100!=0 || year%100==0 && year%400==0)
	{
	  
	  printf("Entered Year:: %d is a Leap Year",year);
	}
	else
	{
	  printf("Entered Year:: %d is Not a leap year",year);
	}
	return 0;
 }
