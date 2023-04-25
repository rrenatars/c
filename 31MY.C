#define cls clrscr()
#define k 6
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <alloc.h>

main()
  {
    char *T;
    int x, y;
    char temp;
    cls;
    printf("Введите слово ");
    gets(T);
    puts(T);
    for (x = 0, y = strlen(T) - 1; x < y; x++, y--)
      {
	temp = T[x];
	T[x] = T[y];
	T[y] = temp;
      }
    puts(T);
    getch();
  }
