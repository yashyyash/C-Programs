/*
  Difference between + & ++ operators.
 
            +                       ++
 1. Arithmetic Operator  1.Increment  Operator
 
 2. Binary Operator      2.Unary Operator
 
 3. Never change its     3.Always change its operand
    operand
  
*/ 
    
  #include<stdio.h>
  
  int main()
  {
  	int a=10,b;  	
  	b=a++;
  	printf("1)%d\n%d\n",a,b);
  	
  	a=10,b=0;
  	b=++a;
  	printf("2)%d\n%d\n",a,b);
  	
  	a=10,b=0;
  	b=a+1;
  	printf("3)%d\n%d\n",a,b);  //a still 10
  	
  	a=10;
  	// 1)printf()   2)i++(postfix)
  	printf("4)%d\n",a++);
	printf("%d\n",a);  
  	
  	a=10;
  	printf("5)%d\n",++a);  // 2)++(prefix)  2)printf()
  	printf("%d\n",a);
  	
  	return 0;
 }  
  	
  	
  	
  	
  	
  	
