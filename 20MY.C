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
	printf("������ ������⢮ ������⮢ ���ᨢ� ");
	scanf("%d", &k);
	if (k < 1 || k > (Len - 1))
	  {
	    printf("�������⨬�� �᫮\n");
	  }
      }
    while (k < 1 || k > (Len - 1));

    for (x = 0; x < k; x++)
      {
	printf("������ %2d ������� ", x + 1);
	scanf("%d", &A[x]);
      }
    printf("���ᨢ: ");
    for (x = 0; x < k; x++)
      {
	printf("%4d", A[x]);
      }
    printf("\n");
    for (x = 0; x < k; x++)
      {
	S += A[x];
      }
    printf("�㬬� ������⮢ ���ᨢ� ࠢ�� %4d", S);
    getch();
  }
