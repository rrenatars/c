#define cls clrscr()
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <alloc.h>

main()
  {
    int c, f;
    cls;
    printf("   ");
    for (c = 0; c <= 15; c ++)
      {
	printf("%5d", c);
      }
    printf("\n");
    for (f = 0; f <= 7; f++)
      {
	printf("%2d ", f);
	for (c = 0; c <= 15; c++)
	{
	  textcolor(c);
	  textbackground(f);
	  cprintf(" ## ");
	  textbackground(0);
	  cprintf(" ");
	}
	printf("\n");
      }
    getch();
  }
