#define cls clrscr()
#define N 10
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <alloc.h>

main()
  {
    int A[N + 1] = {0};
    int x, temp;
    cls;
    randomize();
    puts("Лото");
    for (temp = 0; temp < N; temp++)
    {
      do
      {
	x = random(N) + 1;
      }
      while (A[x] == 1);
      printf("%4d", x);
      A[x] = 1;
    }
    getch();
  }
