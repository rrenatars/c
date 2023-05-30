#define cls clrscr()
#define Name "mas.dat"
#define k 5
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <alloc.h>

main()
  {
    int A[k];
    int x;
    FILE *p;
    cls;
    puts("Из файла в массив");
    p = fopen(Name, "r");
    for (x = 0; x < k; x++)
      {
	fread(&A[x], sizeof(int), 1, p);
      }
    fclose(p);
    puts("Массив");
    for (x = 0; x < k; x++)
      {
	printf("%6d", A[x]);
      }
    getch();
  }
