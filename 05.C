#define Pi 3.14
#define cls clrscr()
main()
  {
    int R;	//ࠤ���
    float S;
    cls;
    textcolor(4);
    textbackground(9);
    cputs(" ���頤� ��㣠");
    textcolor(2);
    cprintf("\r ������ ࠤ��� ");
    textcolor(13);
    scanf("%d", &R);
    S = 3.14 * R * R;
    textcolor(4);
    cprintf(" ���頤� ࠢ�� ");
    textcolor(12);
    cprintf("%0.2f\r", S);
    getch();
  }
