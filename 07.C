#define Pi 3.14
#define cls clrscr()
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
main()
  {
    int R;	//радиус
    float S;
    char A;
    cls;
    puts("Площадь круга, для выхода наберите 0");
    Metka:
      printf("\nВведите радиус ");
      scanf("%d", &R);
      if (R < 0)
	{
	  puts("Некорректное значение");
	  goto Metka;
	}
      S = Pi * R * R;
      printf("Площадь равна ");
      printf("%0.2f\n", S);
    Klav:
      printf("Хотите продолжить?\n");
      A = getch();
      if (A == 13) goto Metka;
      if (A == 27) exit(0);
      puts("Не та клавиша");
      goto Klav;
  }
