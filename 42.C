#define cls clrscr()
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <alloc.h>

int Stepen(int A, int B)
  {
    int t = 1, x;
    for (x = 0; x < B; x++)
      {
	t = t * A;
      }
    return t;
  }

main()
  {
    int x = 5;
    int y = 5;
    int z;
    cls;
    z = Stepen(x, y);
    printf("%d в степени %d равна %d", x, y, z);
    getch();
  }
