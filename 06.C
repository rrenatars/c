#define Pi 3.14
#define cls clrscr()
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
main()
  {
    int R;	//ࠤ���
    float S;
    cls;
    puts("���頤� ��㣠, ��� ��室� ������ 0");
    Metka:
      printf("\n������ ࠤ��� ");
      scanf("%d", &R);
      if (R == 0) exit (0);
      if (R < 0)
	{
	  puts("�����४⭮� ���祭��");
	  goto Metka;
	}
      S = Pi * R * R;
      printf("���頤� ࠢ�� ");
      printf("%0.2f\n", S);
      goto Metka;
  }
