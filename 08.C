
		       //шаблон
#define cls clrscr()
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <alloc.h>

main()
  {
    char y;
    y = '#'
    printf("%d", y);
    asm {
      mov AL, y
      mov AH, 0Eh
      int 10h
      inc AL
      mov y, AL
    }
    printf("%d", y);
    getch();
  }
