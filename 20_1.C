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
    puts("�㬬� ������⮢ ���ᨢ�");
    do
      {
	printf("������ ������⢮ ������⮢ ���ᨢ� ");
	scanf("%d", &k);
	if (k < 2 || k > Max)
	  {
	    printf("�������⨬�� �᫮\n");
	  }
      }
    while (k < 2 || k > Max);
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
    Sum = 0;
    for (x = 0; x < k; x++)
      {
	Sum += A[x];
      }
    printf("�㬬� ������⮢ ���ᨢ� ࠢ�� %4d", Sum);
    getch();
  }
