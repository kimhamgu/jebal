#include "main.h"

int main()
{
    int answerNum;
    int MapNum = 1;
    int endingNum = 0;
    int QuestionNum = 1;
    char catName[] = "�����";
    int Quest1Complete = 0;
    int count = 1;
    int Health = 5;
    int Feeling = 5;
    int Day = 1;
    int Friendliness = 0;

    SetConsoleTitle(TEXT("with cat"));

    system("mode con cols=70 lines=30");

    int x = 1;
    int y = 1;

    CursorView(0);
    gotoxy(x, y);

    Menu:;

    while (1)
    {
        int menuCode = MenuDraw();
        if (menuCode == 0)//���ӽ���
        {
            system("cls");
            goto MapStreet;
            
        }
        else if (menuCode == 1)//��������
        {
            system("cls");   
            int menuCode = InfoDraw();
            goto Menu;
        }
        else if (menuCode == 2)//����
        {
            system("cls");
            exit(1);        
        }
    }


    MapStreet : ;

    printf("WSAD�� ����.");
    while (1)
    {

        Sleep(10);

        if (GetAsyncKeyState('A') & 0x8000)//A
        { //����
            x--;
        }
        if (GetAsyncKeyState('D') & 0x8000)//D
        { //������
            x++;
        }
        if (GetAsyncKeyState('W') & 0x8000)//W
        { //��
            y--;
        }
        if (GetAsyncKeyState('S') & 0x8000)//S
        { //�Ʒ�
            y++;
        }
        if ((x <= 41 && x >= 30) && y == 10)
        {
            gotoxy(1, 1);
            goto Q1;

        }

        system("cls");
        gotoxy(x, y);
        printf("��('_')");

        gotoxy(53, 1);printf("WSAD�� ����.");
        gotoxy(30, 10); printf("�����(=  �����=)");

    }

    MapDoor : ;
    x = 1;y = 2;
   
    while (1)
    {
        Sleep(10);

        if (GetAsyncKeyState('A') & 0x8000)//A
        { //����
            x--;
        }
        if (GetAsyncKeyState('D') & 0x8000)//D
        { //������
            x++;
        }
        if (GetAsyncKeyState('W') & 0x8000)//W
        { //��
            y--;
        }
        if (GetAsyncKeyState('S') & 0x8000)//S
        { //�Ʒ�
            y++;
        }
        if ((x <= 20 && x >= 10) && (y >= 15 && y <= 22))
        {
            gotoxy(1, 1);
            goto MapHouse;

        }

        system("cls");
        gotoxy(x, y);
        printf("('_')");
        printf("(=  �����=)");

        gotoxy(53, 1);printf("WSAD�� ����.");
        gotoxy(1, 1); printf("����̿� �Բ� ������ ������.");

        gotoxy(10, 15); printf("������");
        gotoxy(10, 16); printf("��      ��");
        gotoxy(10, 17); printf("��      ��");
        gotoxy(10, 18); printf("��    @ ��");
        gotoxy(10, 19); printf("��      ��");
        gotoxy(10, 20); printf("��      ��");
        gotoxy(10, 21); printf("��      ��");
        gotoxy(10, 22); printf("������");

    }

    MapHouse:;

    system("cls");
    x = 1;y = 1;

    while (1)
    {
        Sleep(10);

        while (1)
        {
            Sleep(10);

            if (GetAsyncKeyState('A') & 0x8000)//A
            { //����
                x--;
            }
            if (GetAsyncKeyState('D') & 0x8000)//D
            { //������
                x++;
            }
            if (GetAsyncKeyState('W') & 0x8000)//W
            { //��
                y--;
            }
            if (GetAsyncKeyState('S') & 0x8000)//S
            { //�Ʒ�
                y++;
            }
            if ((x <= 50 && x >= 40) && (y >= 14 && y <= 15))
            {
                if (count == 1)
                {
                    goto Q3;
                }
                else if (count == 2);
                {
                    gotoxy(35, 28);printf("������: %d ���: %d ģ�е�: %d", Health, Feeling, Friendliness);
                }


            }
            if ((x <= 10 && x >= 0) && (y >= 23 && y <= 28))
            {
                goto BringUpCat;
            }


            system("cls");
            gotoxy(x, y);
            printf("('_')");

            
            gotoxy(53, 1);printf("WSAD�� ����.");
            gotoxy(23, 25);printf("[����� ����� ���Դϴ�.]");
            gotoxy(40, 14);printf("   ^    ^");
            gotoxy(40, 15);printf("(=  �����=)");
            gotoxy(40, 17);printf("   [%s]", catName);
            gotoxy(60, 2);printf("Day %d", Day);

            if (Quest1Complete == 1)
            {
                gotoxy(0, 23);printf("\033[0;32m          ��");
                gotoxy(2, 24); printf("\033[0;32m   ��    ");
                gotoxy(2, 25); printf("\033[0;32m��    ��  ");
                gotoxy(2, 26); printf("\033[0;32m����ֱ�  ");
                gotoxy(2, 27); printf("\033[0;32m��    ��  ");
                gotoxy(2, 28); printf("\033[0;32m��    å  ");
            }

        }

    }

    BringUpCat:;

    system("cls");

    while (1)
    {
        int menuCode = BringUpCatDraw();
        if (menuCode == 0)//��
        {
            system("cls");
            printf(" ���� ���δ�.");
            Sleep(2000);
            feeding(&Health, &Feeling);
            goto SleepCat;
        }
        else if (menuCode == 1)//����
        {
            system("cls");
            printf(" �򸣸� �ش�.");
            Sleep(2000);
            HavingSnack(&Health, &Feeling);
            goto SleepCat;
        }
        else if (menuCode == 2)//����ֱ�
        {
            system("cls");
            printf(" �峭������ ����ش�.");
            Sleep(2000);
            PlayingCat(&Health, &Feeling);
            goto SleepCat;
        }
        else if (menuCode == 3)//���
        {
            system("cls");
            printf(" ����� ����� 2-3�޿� �� ���� �����ϴ�.");
            Sleep(2000);
            WashingCat(&Health, &Feeling);
            goto SleepCat;
        }
        else if (menuCode == 4)//��å
        {
            system("cls");
            printf(" ����̴� ��å�� �������� �ʽ��ϴ�.");
            Sleep(2000);
            //goto WalkingCat;
            WalkingCat(&Health, &Feeling);
            goto SleepCat;
        }
    }


    SleepCat:;

    RaiseFriendliness(&Health, &Feeling, &Friendliness);
    EndCheck(&Health, &Feeling, &Friendliness, &Day, &catName);
    system("cls");
    printf(" \n");
    printf(" %s (��)�� ����\n", catName);
    printf(" ���� ������ %d, ��� %d, ģ�е� %d\n", Health, Feeling, Friendliness);
    Sleep(2000);
    Day += 1;
    goto MapHouse;


#pragma region Q
    Q1 : ;


    system("cls");

    while (1)
    {
        int menuCode = Q1Draw();
        if (menuCode == 0)
        {
            system("cls");
            printf(" ���� �����ؼ� ���ִ� ���� �԰� ǫ �������ϴ�.\n ������ �Բ��� ����̴� �����ϴ�.\n �� ������ ����� Ű����Դϴ�.\n\n");
            Sleep(1000);
            EndingGameOver();
        }
        else if (menuCode == 1)
        {
            system("cls");
            printf(" ����̿��� ���� �ɾ����� ������ ������ ����̰� ���� �����ϴ�.\n ����ϸ� �ٰ����� �ٶ��ϴ�.\n\n");
            Sleep(1000);
            EndingGameOver();
        }
        else if (menuCode == 2)
        {
            system("cls");
            printf(" ���� �ɷ� �Ѿ����� ������� ������ �޾ҽ��ϴ�.\n");
            Sleep(1000);
            goto Q2;
        }
    }

Q2:;

    Sleep(3000);
    system("cls");

    while (1)
    {
        int menuCode = Q2Draw();
        if (menuCode == 0)
        {
            system("cls");
            goto MapDoor;
        }
        else if (menuCode == 1)
        {
            system("cls");
            goto Q1;
        }

    }

Q3:;

    system("cls");

    while (1)
    {
        int menuCode = Q3Draw();
        if (menuCode == 0)
        {
            count = 2;
            system("cls");
            printf("������� �̸��� �Է��� �ּ���\n");
            scanf("%s", &catName);

            system("cls");
            goto Q4;
        }
        else if (menuCode == 1)
        {
            system("cls");
            goto MapHouse;
        }

    }

Q4:;

    printf("����� �̸��� %s�� �����ұ��?\n", catName);


    while (1)
    {
        int menuCode = Q4Draw();
        if (menuCode == 0)
        {
            system("cls");
            printf("����� �̸��� %s�Դϴ�.\n", catName);
            Sleep(1500);
            Quest1Complete = 1;
            goto MapHouse;
        }
        else if (menuCode == 1)
        {
            system("cls");
            goto Q3;
        }

    }

}


















