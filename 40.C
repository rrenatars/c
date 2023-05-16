#define cls clrscr()
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <alloc.h>

long Fact(int K)
  {
    int t;
    if (K == 1)
      {
	return 1;
      }
    else
      {
	return K * Fact(K - 1);
      }
  }

main()
  {
    int N = 5;
    long F;
    F = Fact(N);
    cls;
    printf("%d факториал %4d", N, F);
    getch();
  }
