#define Pi 3.14
main()
  {
    int R;	//ࠤ���
    float S;
    clrscr();
    puts("���頤� ��㣠");
    printf("\n������ ࠤ��� ");
    scanf("%d", &R);
    S = Pi * R * R;
    printf("���頤� ࠢ�� ");
    printf("%0.2f\n", S);
    getch();
  }
