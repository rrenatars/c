		       //шаблон
#define cls clrscr()
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <alloc.h>

main()
  {
    int A = 3;
    int B = 4;
    int C = 0;
    cls;
    puts("Обмен переменных");
    printf("%5d %5d\n", A, B);
    C = A;
    A = B;
    B = C;
    printf("%5d %5d\n", A, B);
    getch();
  }
