#define cls clrscr()
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <alloc.h>

void Shapka();
void Pr1(int A);
void Pr2(int A, char *B);
void Color(int A, int B);
int Max2(int A, int B);

//����ணࠬ��
void Shapka()
  {
    cls;
    puts("��������");
  }

//��楤��
void Pr1(int A)  //����� �᫠
  {
    printf("%4d\n", A);
  }

void Pr2(int A, char *B)  //����� 梥⭮�� ⥪��
  {
    textcolor(A);
    cprintf("%s", B);
    puts("");
  }

void Color(int A, int B)
  {
    textcolor(A);
    textbackground(B);
  }

int Max2(int A, int B)
  {
    return A > B ? A : B;
  }

main()
  {
    int x = 14, y = 35, z;
    char *T = "�ਢ��";
    Shapka();  //���ணࠬ��
    Pr1(x);
    Pr2(14, T);
    Color(5, 3);
    cprintf("����");
    printf("\n");
    z = Max2(3, 2);
    printf("%4d", z);
    getch();
  }
