#define Pi 3.14
#define cls clrscr()
main()
  {
    int R;	//радиус
    float S;
    cls;
    textcolor(4);
    textbackground(9);
    cputs(" Площадь круга");
    textcolor(2);
    cprintf("\r Введите радиус ");
    textcolor(13);
    scanf("%d", &R);
    S = 3.14 * R * R;
    textcolor(4);
    cprintf(" Площадь равна ");
    textcolor(12);
    cprintf("%0.2f\r", S);
    getch();
  }
