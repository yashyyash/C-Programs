
 //Mixed Expressions
 #include<stdio.h>
 
 int main()
 {
 	int a,b=5,c=2,d=4,e=3;
 	
 	a=b+c*d/e;
 	/*
 	  1. c*d=p 2*4=8
 	  2. p/e=r 8/3=2
 	  3. b+r=ans 5+2=7
 	  4. a=ans. a=7
 	*/
 	printf("%d\n",a);
 	
 	a=b+c*d-e;
 	/*
 	  1. c*d=p 2*4=8
 	  2. b+p=r 5+8=13
 	  3. r-e=ans 13-3=10;
 	  4. a=10 */ 	  
 	printf("%d\n",a); 
 	
 	a=b>c-d+e;
 	/*
 	 1.c-d=s 2-4=-2
 	 2.s+e=r -2+3=1
 	 3.b>1=ans 5>1=1
 	 4.a=1 */
 	 printf("%d\n",a);
 	 
 	 a=(b+c)*d;
 	 /*
 	   1.(b+c)=r  5+2=7
 	   2.r*d=ans  7*4=28
 	   3.a=28 */
 	 printf("%d\n",a);
 	 
 	 
 	 /*
 	  1.(b+c-d) b+c ie 5+2=7 7-d 7-4=3
 	  2.3*e 3*3=9
 	  3.a=9 */
 	 printf("%d\n",a); 
 	 
 	 a=b*(c+d/c);
 	 /*
 	 1.(c+d/c) d/c 4/2=2 c+2 2+2=4
 	 2.b*4 5*4=20
 	 3.a=20 */
 	 printf("%d\n",a);
 	 
 	 a=(b+c)*(d-e);
 	 
 	   /*1.(b+c) (5+2)=7
 	   2.(d-e) (4-3)=1
 	   3.7*1=7
 	   4.a=7*/
 	 printf("%d\n",a);  
 	 
 	 a=b*((c+d)/e);  //nesting of () inner() first 
 	 /*
 	  1.(c+d) (2+4)=6
 	  2.6/e 6/3=2
 	  3.b*2 5*2=10
 	  4.a=10
 	  */
 	  printf("%d\n",a);  
 	  
 	
 	return 0;
 }
