#define cls clrscr()
#define Max 5
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <alloc.h>

main()
  {
    int Sum, k, x;
    int A[Max];
    cls;
    puts("Сумма элементов массива");
    do
      {
	printf("Введите количество элементов массива ");
	scanf("%d", &k);
	if (k < 2 || k > Max)
	  {
	    printf("Недопустимое число\n");
	  }
      }
    while (k < 2 || k > Max);
    for (x = 0; x < k; x++)
      {
	printf("Введите %2d элемент ", x + 1);
	scanf("%d", &A[x]);
      }
    printf("Массив: ");
    for (x = 0; x < k; x++)
      {
	printf("%4d", A[x]);
      }
    printf("\n");
    Sum = 0;
    for (x = 0; x < k; x++)
      {
	Sum += A[x];
      }
    printf("Сумма элементов массива равна %4d", Sum);
    getch();
  }
