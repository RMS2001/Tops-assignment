#include<stdio.h>
 int main()
 {
    float A,B,a,m,s,d,t;
    int select;

     printf("\n1. Addition");
     printf("\n2. Multiplication");
     printf("\n3. Substraction");
     printf("\n4. Division");

     printf("\nSelect = ");
     scanf("%d",&select);
     printf("Enter the value for A = ");
     scanf("%f",&A);
     printf("Enter the value for B = ");
     scanf("%f",&B);
     a=A+B;
     m=A*B;
     s=A-B;
     d=A/B;

     

  if (select == 1)
  {
    printf("Addition =%f",a);
  }   
  else if (select == 2)
  {
    printf("Multiplication =%f",m);
  }   
  else if (select == 3)
  {
    printf("Substraction =%f",s);
  }   
  else if (select == 4)
  {
    printf("Division =%f",d);
  }   
  else 
  {
    printf("!!!Invalid Selection !!!");
  }
  
   return 0;
 }