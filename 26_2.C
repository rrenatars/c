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
    int x, y, temp;
    cls;
    printf("Массив до:");
    for (x = 0; x < k; x++)
      {
	printf("%4d", A[x]);
      }
    for (y = k - 2; y >= 0; y--)
      {
	for (x = 0; x <= y; x++)
	  {
	    if (A[x] > A[x + 1])
	      {
		temp = A[x];
		A[x] = A[x + 1];
		A[x + 1] = temp;
	      }
	  }
      }
    printf("\nМассив после:");
    for (x = 0; x < k; x++)
      {
	printf("%4d", A[x]);
      }

    getch();
  }
