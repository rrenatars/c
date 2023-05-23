#define cls clrscr()
#define Name "mas.txt"
#define k 5
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <alloc.h>

main()
  {
    FILE *p;
    int A[k] = {1, 12, 123, 1234, 12345};
    int x;
    cls;
    p = fopen(Name, "w");
    for (x = 0; x < k; x++)
      {
	fprintf(p, "%d\n", A[x]);
      }
    fclose(p);
    getch();
  }
