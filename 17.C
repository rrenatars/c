#define cls clrscr()
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <alloc.h>

main()
  {
    int x, n, k, s;
    cls;
    printf("������ �᫮ ");
    scanf("%d", &n);
    printf("\n");
    printf("������ �⥯��� ");
    scanf("%d", &k);
    printf("\n");
    s = 1;
    for (x = 1; x <= k; x++)
      {
	s *= n;
      }
    printf("%d � �⥯��� %d ࠢ�� %d", n, k, s);
    getch();
  }
