#define cls clrscr()
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <alloc.h>

main()
  {
    int R;
    cls;
    // контроль допустимости
    do
      {
	printf("Введи радиус ");
	scanf("%d", &R);
	if (R < 0) puts("ошибка");
      }
    while (R < 0);
    printf("%d", R);
    getch();
  }
