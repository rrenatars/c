#define cls clrscr()
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <alloc.h>

main(int k, char *p[]) //primer.exe(p[0]) my.txt(p[1]) 12(p[2])
  {
    int x, y, z;
    cls;
    x = atoi(p[1]);
    y = atoi(p[3]);
    printf("%d %d\n", x, y);
    z = 0;
    if (p[2] == "+")
      {
	z = x + y;
      }
    if (p[2] == "-")
      {
	z = x - y;
      }
    printf("%d %s %d = %d", x, p[2], y, z);
    getch();
  }
