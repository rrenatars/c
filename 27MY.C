#define cls clrscr()
#define k 6
#define N 10
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <alloc.h>

main()
  {
    int A[N] = {0};
    int x, y, i, kol;
    cls;
    randomize();
    for (y = 0; y <= N; y++)
      {
	i = random(10) + 1;
	A[y] = i;
	kol = 0;
	for (x = 0; x < N; x++)
	  {
	    if (i = A[x])
	      {
		kol++;
	      }
	  }
	if (kol = 1)
	  {
	    printf("%4d", i);
	  }
	if (kol > 1)
	  {
	    y--;
	  }
      }
    getch();
  }
