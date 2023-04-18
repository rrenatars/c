#define cls clrscr()
#define k 6
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <alloc.h>

main()
  {
    int A[k] = {7, 9, 4, 5, 2, 3};
    int x, y;
    int temp;
    cls;
    printf("Массив до:");
    for (x = 0; x < k; x++)
      {
	printf("%4d", A[x]);
      }
    for (x=0, y = k - 1; x < y; x++, y--)
      {
	temp = A[x];
	A[x] = A[y];
	A[y] = temp;
      }
    printf("\nМассив после:");
    for (x = 0; x < k; x++)
      {
	printf("%4d", A[x]);
      }

    getch();
  }
