#define cls clrscr()
#define Len 100
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <alloc.h>

main()
  {
    int S, k, x;
    int A[Len];
    S = 0;
    cls;
    do
      {
	printf("Введите количество элементов массива ");
	scanf("%d", &k);
	if (k < 1 || k > (Len - 1))
	  {
	    printf("Недопустимое число\n");
	  }
      }
    while (k < 1 || k > (Len - 1));

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
    for (x = 0; x < k; x++)
      {
	S += A[x];
      }
    printf("Сумма элементов массива равна %4d", S);
    getch();
  }
