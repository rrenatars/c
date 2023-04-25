#define cls clrscr()
#define k 6
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <alloc.h>

main()
  {
    int x;
    char T;
    char *k;
    cls;
    scanf("%s", T);
    k = strlen(T);
    for (x = 0; x < k; x++)
      {
        printf("%s\n", T[x]);
      }
    getch();
  }
