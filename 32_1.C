#define cls clrscr()
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <alloc.h>

main()
  {
    int x, y, temp, k;
    char *T = "ABCDEFGHIJKLMNOPQRSTVUWXYZ";
    char z;
    cls;
    randomize();
    puts("Случайные латинские буквы");
    k = strlen(T);
    for (temp = 0; temp < 100; temp++)
      {
	x = random(k);
	y = random(k);
	z = T[x];
	T[x] = T[y];
	T[y] = z;
      }
    puts(T);
    getch();
  }
