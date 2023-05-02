#define cls clrscr()
#define k 3
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <alloc.h>

main()
  {
    typedef struct {char *Fam; int Zar;} tip1;
    tip1 M[k];
    int x;
    cls;
    M[0].Fam = "Иванов";
    M[1].Fam = "Ивановский";
    M[2].Fam = "Кац";
    M[0].Zar = 200;
    M[1].Zar = 3000;
    M[2].Zar = 15;
    for (x = 0; x < k; x++)
      {
	printf("%4d %-10s%6d\n", x + 1, M[x].Fam, M[x].Zar);
      }
    getch();
  }
