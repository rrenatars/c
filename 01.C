main()
  {
    int R;	//радиус
    float S;
    clrscr();
    puts("Площадь круга");
    printf("\nВведите радиус ");
    scanf("%d", &R);
    S = 3.14 * R * R;	//площадь
    printf("Площадь равна %0.2f\n", S);
    getch();
  }
