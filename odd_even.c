#include<stdio.h>
int main()
{
 int a,i;
 printf("Enter the number = ");
 scanf("%d",&a);
 printf("******** even numbers ********");
 for(i=2;i<=a;i=i+2)
 {
  printf("\n%d",i);
 }
printf("\n********* odd numbers **********");
for(i=1;i<=a;i=i+2)
{
    printf("\n%d",i);
}
 

    return 0;
}