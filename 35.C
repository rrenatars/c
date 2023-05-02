#define cls clrscr()
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <alloc.h>

int Summa(int A, int B)
    {
      int temp;
      temp = A + B;
      return temp;
    }

main()
  {
    int x = 3, y = 4, z;
    cls;
    z = Summa(x, y);
    printf("%d\n", z);
    printf("%d", Summa(12, 34));
    getch();
  }
