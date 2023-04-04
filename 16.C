#define cls clrscr()
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <alloc.h>

main()
  {
    int x, y, N, S;
    cls;
    printf("Введите число ");
    S = 0;
    scanf("%d", &N);
    for (x = 1; x <= N; x++)
      {
	S += x;
      }
    printf("для N = %d сумма равна %d\n", N, S);
    puts("Второй способ");
    printf("Введите число ");
    S = 0;
    scanf("%d", &N);
    for (x = 1, y = N; x < y; x++, y--)
      {
	S += x + y;
      }
    if (N % 2 != 0)
      S += y;
    printf("для N = %d сумма равна %d\n", N, S);
    puts("Третий способ");
    S = (N + 1) * (N / 2);
    printf("для N = %d сумма равна %d\n", N, S);
    getch();
  }
