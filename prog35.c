#include <stdio.h>
int main()
{
 float salary;
 float bonus;
 float percent;
 float finalsalary;
 scanf("%f\n",&salary);
 scanf("%f\n",&bonus);
 scanf("%f\n",&percent);
 scanf("%f\n",&finalsalary);
 percent=(salary*bonus)/100;
 finalsalary=salary+percent;
 printf("\n%f",percent);
 printf("\n%f",finalsalary);
 return 0;
 }
