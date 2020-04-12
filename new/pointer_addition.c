#include <stdio.h>
int main()
{
   int first, second, sum;

   printf("Enter two integers to add\n");
   scanf("%d %d", &first, &second);

   sum = *&first + *&second;

   printf("Sum of the numbers = %d\n", sum);

   return 0;
}