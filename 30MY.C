#define cls clrscr()
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <alloc.h>

main()
  {
    int x;
    char *T;
    int k, c, fon;
    cls;
    puts("Символы слова печатаются разными цветами и фонами");
    printf("Введите слово ");
    gets(T);
    randomize();
    k = strlen(T);
    c = 1;
    for (x = 0; x < k; x++)
      {
	while (c = random(8) + 1)
	  {
	    fon = (random(8) + 1) + 1;
	  }
	textcolor(c);
	textbackground(fon);
	cprintf("%c", T[x]);
	c++;
	if (c > 15)
	  {
	    c = 1;
	  }
      }
    getch();
  }
