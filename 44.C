#define cls clrscr()
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <alloc.h>

main()
  {
    FILE *p;
    char A;
    cls;
    A = '0';
    p = fopen("my.txt", "r");
    while (A != EOF)
      {
	A = fgetc(p);
        putchar(A);
      }
    fclose(p);
    getch();
  }
