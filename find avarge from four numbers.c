#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1,num2,num3,num4;
    float avg;
  printf("Enter the first number :");scanf("%f",&num1);
  printf("Enter the second number :");scanf("%f",&num2);
  printf("Enter the third number :");scanf("%f",&num3);
  printf("Enter the fourth number :");scanf("%f",&num4);

  avg=(num1+num2+num3+num4)/4;
   printf("\n\n*************Average is %0.2f ***************\n\n",avg);

   printf("first number         :  %.0f -- deviation : %0.2f\n",num1,num1-avg);
   printf("second number        :  %.0f -- deviation : %0.2f\n",num2,num2-avg);
   printf("third number         :  %.0f -- deviation : %0.2f\n",num3,num3-avg);
   printf("fourth number        :  %.0f -- deviation : %0.2f\n",num4,num4-avg);

    return 0;
}
