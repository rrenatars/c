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
    printf("������ �᫮ ");
    S = 0;
    scanf("%d", &N);
    for (x = 1; x <= N; x++)
      {
	S += x;
      }
    printf("��� N = %d �㬬� ࠢ�� %d\n", N, S);
    puts("��ன ᯮᮡ");
    printf("������ �᫮ ");
    S = 0;
    scanf("%d", &N);
    for (x = 1, y = N; x < y; x++, y--)
      {
	S += x + y;
      }
    if (N % 2 != 0)
      S += y;
    printf("��� N = %d �㬬� ࠢ�� %d\n", N, S);
    puts("��⨩ ᯮᮡ");
    S = (N + 1) * (N / 2);
    printf("��� N = %d �㬬� ࠢ�� %d\n", N, S);
    getch();
  }
