#define cls clrscr()
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <alloc.h>

/*int Enter()   //function
  {
    int t;
    do
      {
	printf("������ ");
	scanf("%d", &t);
	if (t < 0)
	  {
	    puts("�訡��");
	  }
      }
    while (t < 0);
    return t;
  }*/

void Input(int *t)     //procedure (for professionals)
  {
    do
      {
	printf("����� ");
	scanf("%d", t);
	if (*t < 0)
	  {
	    puts("�訡��");
	  }
      }
    while (*t < 0);
  }

main()
  {
    int A, B;
    cls;
    Input(&A);
    Input(&B);
    printf("%2d %2d", A, B);
    getch();
  }
