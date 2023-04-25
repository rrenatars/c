#define cls clrscr()
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <alloc.h>

main()
  {
    int x, temp, z, k, kz;
    char *T = "Приветик";
    char *key = "ABCD";

    cls;
    k = strlen(T);
    kz = strlen(key);
    puts(T);
    z = 0;
    for (x = 0; x < k; x++)
      {
	T[x] = T[x] ^ key[z];
	z++;
	if (z > kz)
	  {
	    z = 0;
	  }
      }
    puts(T);
    z = 0;
    for (x = 0; x < k; x++)
      {
	T[x] = T[x] ^ key[z];
	z++;
	if (z > kz)
	  {
	    z = 0;
	  }
      }


    puts(T);
    getch();
  }
