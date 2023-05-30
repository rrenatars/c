#define cls clrscr()
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <alloc.h>

main()
  {

    cls;
    puts("Вызов внешних программ");
    system("md abc");
    getch();
  }
