		       //蠡���
#define cls clrscr()
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <alloc.h>

main()
  {
    int A, B, C;
    float p, S;
    char Key;
    cls;
    Metka:
      printf("������ ����� ��஭� ��㣮�쭨�� ");
      scanf("%d", &A);
      if (A < 1)
	{
	  puts("�����४⭮� ���祭��");
	  goto Metka;
	}
      Side2:
	printf("������ ����� ��஭� ��㣮�쭨�� ");
	scanf("%d", &B);
	if (B < 1)
	  {
	    puts("�����४⭮� ���祭��");
	    goto Side2;
	  }
      Side3:
	printf("������ ����� ��஭� ��㣮�쭨�� ");
	scanf("%d", &C);
	if (C < 1)
	{
	  puts("�����४⭮� ���祭��");
	  goto Side3;
	}
      if ((A + B) < C || (C + B) < A || (A + C) < B) goto Metka;
      p = (A + B + C) / 2;
      S = p * (p - A) * (p - B) * (p - C);
      if (S <= 0) goto Metka;
      S = sqrt(S);
      printf("���頤� ��㣮�쭨�� ࠢ�� %0.2f\n", S);
      Klav:
	printf("���� �த������?\n");
	Key = getch();
	if (Key == 13) goto Metka;
	if (Key == 27) exit(0);
	puts("�� � ������");
	goto Klav;
  }
