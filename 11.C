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
    x = 1;
    cls;
    printf("Metka:\n");
    Metka:
      printf("%d", x);
      x++;
      if (x <= 7) goto Metka;
    printf("\n");
    printf("While:\n");
    x = 1;
    while (x <= 7)
      {
	printf("%d", x);
	x++;
      }
    printf("\n");
    printf("Do:\n");
    x = 1;
    do
      {
	printf("%d", x);
	x++;
      }
    while (x <= 7);
    printf("\n");
    printf("For:\n");
    for (x = 1; x <= 7; x++)
      {
	printf("%d", x);
      }
    printf("\n");
    // for (; x <= 7; x++)
    // for (; x <= 7;)
    // for (;;)
    // for (x = 1; x < 10000000000; x++); задержка
    printf("For x, y:\n");
    for (x = 1, y = 9; x < y ; x++, y--)
      {
	printf("%2d %2d\n", x, y);
      }
    getch();
  }
