#define cls clrscr()
#define k1 7
#define k2 5
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <alloc.h>

void rndmas(int *M, int N)
  {
    int x;
    for (x = 0; x < N; x++)
      {
	M[x] = random(10);
      }
  }

void prmas(int *M, int N)
  {
    int x;
    puts("Элементы массива");
    for (x = 0; x < N; x++)
      {
	printf("%4d", M[x]);
      }
    printf("\n");
  }

int Summas(int *M, int N)
  {
    int x, S = 0;
    for (x = 0; x < N; x++)
      {
	S = S + M[x];
      }
    return S;
  }

main()
  {
    int A[k1];
    int B[k2];
    int z;
    cls;
    randomize();
    rndmas(A, k1);
    prmas(A, k1);
    z = Summas(A, k1);
    printf("Сумма элементов массива равна %2d\n", z);
    rndmas(B, k2);
    prmas(B, k2);
    z = Summas(B, k2);
    printf("Сумма элементов массива равна %2d\n", z);
    getch();
  }
