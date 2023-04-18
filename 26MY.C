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
    int Flag = 1;
    int x, temp;
    cls;
    printf("Массив до:");
    for (x = 0; x < k; x++)
      {
	printf("%4d", A[x]);
      }
    while (Flag == 1)
      {
	for (x = 0; x < k - 1; x++)
	  {

	    if (A[x] > A[x + 1])
	      {
		temp = A[x + 1];
		A[x] = A[x + 1];
		A[x + 1] = temp;
		Flag = 1;
	      }
	    if (A[x] < A[x + 1])
	      {
		Flag = 0;
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
