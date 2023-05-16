#define cls clrscr()
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <alloc.h>

void Exchange(int *A, int *B)
  {
    int t;
    t = *A;
    *A = *B;
    *B = t;
  }

main()
  {
    int x = 3;
    int y = 4;
    cls;
    printf("%2d %2d\n", x, y);
    Exchange(&x, &y);
    printf("%2d %2d", x, y);
    getch();
  }
