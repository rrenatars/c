#define cls clrscr()
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <alloc.h>

main()
  {
    int x, y;
    cls;
    puts("Таблица умножения");
    for (y = 1; y <= 9; y++)
      {
	for (x = 1; x <= 9; x++)
	  {
	    printf("%3d", x * y);
	  }
	printf("\n");
      }
    getch();
  }
