#include <stdio.h>

int main()
{
  int array[100], g, f, h, swap;

  printf("Enter number of elements\n");
  scanf("%d", &g);

  printf("Enter %d integers\n", g);

  for (f = 0; f < g; f++)
    scanf("%d", &array[f]);

  for (f = 0 ; f < g - 1; f++)
  {
    for (h = 0 ; h < g - f - 1; h++)
    {
      if (array[h] > array[h+1]) 
      {
        swap       = array[h];
        array[h]   = array[h+1];
        array[h+1] = swap;
      }
    }
  }

  printf("Sorted list in ascending order:\n");

  for (f = 0; f < g; f++)
     printf("%d\n", array[f]);

  return 0;
}