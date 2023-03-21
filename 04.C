#define Pi 3.14
main()
  {
    int R;	//радиус
    float S;
    clrscr();
    puts("Площадь круга");
    printf("\nВведите радиус ");
    scanf("%d", &R);
    S = Pi * R * R;
    printf("Площадь равна ");
    printf("%0.2f\n", S);
    getch();
  }
