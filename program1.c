#include<stdio.h>
int main()
{
        int i;
        float x[10], value, total;

/*. . . . .   RAEDING VALUES INTO ARRAY . . . . .*/

  printf("ENTER 10 REAL NUMBERS\n");

for(i = 0; i<=10; i++)
{
      scanf("%f", &value);
      x[i] = value;
}
/*. . . . . COMPUTATION OF TOTAL . . . . .*/

total = 0.0;
for(i = 0; i<10; i++)
  total = total +n x[i]*x[i];

/*. . . . . PRINTING OF x[i] VALUES AND TOTAL. . . . .*/

printf("\n");
for(i = 0; i<10; i++)
  printf("x[%2d] = %5.2f\n", x[i]);

printf("\ntotal = %2.f\", total);

  return 0;
}

    
