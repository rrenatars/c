#define Pi 3.14
#define cls clrscr()
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
main()
  {
    int R;	//ࠤ���
    float S;
    char A;
    cls;
    puts("���頤� ��㣠, ��� ��室� ������ 0");
    Metka:
      printf("\n������ ࠤ��� ");
      scanf("%d", &R);
      if (R < 0)
	{
	  puts("�����४⭮� ���祭��");
	  goto Metka;
	}
      S = Pi * R * R;
      printf("���頤� ࠢ�� ");
      printf("%0.2f\n", S);
    Klav:
      printf("���� �த������?\n");
      A = getch();
      if (A == 13) goto Metka;
      if (A == 27) exit(0);
      puts("�� � ������");
      goto Klav;
  }
