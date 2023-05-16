#define cls clrscr()
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <alloc.h>

int Kwa(int A)
  {
    return A * A;
  }

int Kub(int A)
  {
    return A * A * A;
  }

main()
  {
    int y, x = 3;
    int (*P)();
    cls;
    P = Kwa;
    y = P(x);
    printf("%2d\n", y);
    P = Kub;
    y = P(x);
    printf("%2d\n", y);
    getch();
  }
