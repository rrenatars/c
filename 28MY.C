#define cls clrscr()
#define ky 10
#define kx 10
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <alloc.h>

main()
  {
    int A[ky][kx];
    int x, y, N;
    cls;
    for (y = 0; y < ky; y++)
      {
	for (x = 0; x < kx; x++)
	  {
	    A[y][x] = 1;
	  }
      }
    for (y = 1; y < ky - 1; y++)
      {
	for (x = 1; x < kx - 1; x++)
	  {
	    A[y][x] = 0;
	  }
      }
    for (y = 0; y < ky; y++)
      {
	for (x = 0; x < kx; x++)
	  {
	    printf("%4d", A[y][x]);
	  }
	printf("\n");
      }
    for (N = 1; N <= ky * kx; N++)
      {
	if (A[])
      }

    getch();
  }
