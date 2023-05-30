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
    FILE *p;
    int temp;
    int N;
    cls;
    puts("Изменить элемент в файле");
    p = fopen(Name, "r+");
    for (N = 0; N < k; N++)
      {
	fseek(p, N * sizeof(int), 0);
	fread(&temp, sizeof(int), 1, p);
	temp++;
	printf("%d\n", temp);
	fseek(p, N * sizeof(int), 0);
	fwrite(&temp, sizeof(int), 1, p);
      }
    fclose(p);
    getch();
  }
