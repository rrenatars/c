#define cls clrscr()
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <alloc.h>

main()
  {
    int x, temp;
    char *T = "ABCDEFGHIJKLMNOPQRSTVUWXYZ";
    cls;
    randomize();
    puts("���砩�� ��⨭᪨� �㪢�");
    k = strlen(T);
    for (temp = 0; temp < N; temp++)
    {
      do
      {
	x = random(k);
      }
      while (T[x] == '.');
      printf("%c ", T[x]);
      T[x] = '.';
    }
    getch();
  }
