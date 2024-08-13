
    /* W.A.P using User Defined Function to copy One String to another String
       ie dont use string.h*/

 #include<stdio.h>
 //#include<conio.h>

 void stringcopy(char d[],char s[]); //Fun Declr

  int main()
  {
    char s1[10],s2[10]; 

    printf("Enter a String ");
    gets(s1);

    stringcopy(s2,s1); //Func Calling

    printf("Original String(Source): %s\n",s1);
    printf("New String(Destination): %s",s2);

    return 0;
  } 
  
  /* Note : d and s are dummy char arrays but internally
            converted to char *d,*s; //char pointers */

  //Func defn
  void stringcopy(char d[],char s[])
  {
    int i=0;

    while(s[i]!='\0')
    { 
      d[i]=s[i]; //copy char by char from s(source string) to d(destination string)
      i++;
    } 

   d[i]='\0';  //To terminate the String with '\0'
   
 }
