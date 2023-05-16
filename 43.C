#define cls clrscr()
#define k 4
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <alloc.h>
const c0 = 0, f0 = 2, c1 = 14, f1 = 4;

main()
  {

    char *T[k + 1];
    int y[k + 1], x[k + 1];
    int j, A, B;
    int tek;
    T[1] = " OPEN ";
    T[2] = " SAVE ";
    T[3] = " RUN ";
    T[4] = " QUIT ";
    y[1] = 10;
    y[2] = 12;
    y[3] = 14;
    y[4] = 16;
    x[1] = 20;
    x[2] = 20;
    x[3] = 20;
    x[4] = 20;
    tek = 1;
    cls;
    Met1:
    for (j = 1; j <= k; j++)
      {
	textcolor(c0);
	textbackground(f0);
	if (j == tek)
	  {
	    textcolor(c1);
	    textbackground(f1);
	  }
	gotoxy(x[j], y[j]);
	cputs(T[j]);
      }
    A = getch();
    if (A == 0)
      {
	B = getch();
      }
    if (A == 27)
      {
	exit(0);
      }
    if (A == 13)
      {
	goto Met2;
      }
    if (A == 0 && B == 80)
      {
	tek = tek + 1;
      }
    if (A == 0 && B == 72)
      {
	tek = tek - 1;
      }
    if (tek > k)
      {
	tek = 1;
      }
    if (tek < 1)
      {
	tek = k;
      }
    goto Met1;
    Met2:
      textcolor(7);
      textbackground(0);
      gotoxy(50, 20);
      if (tek == 1)
	{
	  puts("открыть");
	}
      if (tek == 2)
	{
	  puts("сохранить");
	}
      if (tek == 3)
	{
	  puts("выполнить");
	}
      if (tek == 4)
	{
	  puts("выйти");
	}
    getch();
  }
