#define cls clrscr()
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <alloc.h>

main()
  {
    char *T;
    cls;
    puts("Символы слова печатаются в столбик");
    printf("Введите слово ");
    scanf("%s", T); //gets(T);
    puts();
    while (*T)
      {
	printf("%c\n", *T++);
      }
    getch();
  }
