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
    int A[k];
    int x;
    p = fopen(Name, "r");
    for (x = 0; x < k; x++)
      {
	fscanf(p, "%d", &A[x]);
      }
    fclose(p);
    cls;
    for (x = 0; x <k; x++)
      {
	printf("%6d", A[x]);
      }
    getch();
  }
