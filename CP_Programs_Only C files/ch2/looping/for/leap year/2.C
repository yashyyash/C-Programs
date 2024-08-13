/*W.C.P to Print Leap Years as per the specified range entered by the user

 Definition :: "All years which are perfectly divisible by 4 are leap years
		except for century years( years ending with 00 eg::2000 )
		which is a leap year only it is perfectly divisible by 400" */


 #include<stdio.h>
 #include<conio.h>

 int main()
 {
    int year;
    int min_year,max_year;
    clrscr();

    printf("\n Enter the Lowest year: ");
    scanf("%d",&min_year);

    printf("\n Enter the Highest year: ");
    scanf("%d",&max_year);

    printf("Leap years in given range are: ");

    for(year=min_year;year<=max_year;year++)
    {
       if(year%4==0 && year%100!=0 || year%100==0 && year%400==0)
	  {
	    printf("\n%d",year);
	  }
    }  
 
  return 0;
 }

