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
    // ����஫� �����⨬���
    do
      {
	printf("����� ࠤ��� ");
	scanf("%d", &R);
	if (R < 0) puts("�訡��");
      }
    while (R < 0);
    printf("%d", R);
    getch();
  }
