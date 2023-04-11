#define cls clrscr()
#define k 7
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <alloc.h>

main()
  {
    int S = 0;
    int x;
    int A[k] = {-2, -9, -5, -1, -3, -4, -8};
    int Max;
    Max = A[0];
    cls;
    for (x = 0; x < k; x++)
      {
	if (A[x] >= Max)
	  {
	    Max = A[x];
	  }
      }
    printf("Массив: ");
    for (x = 0; x < k; x++)
      {
	printf("%4d", A[x]);
      }
    printf("\nМаксимальный элемент в массиве равен %4d", Max);
    getch();
  }
