#include "main.h"

#pragma region �����
//int main()
//{
//    FILE* fp;
//    int res;
//    int tmp;
//    char str[256];
//    fp = fopen("image.txt", "rt");
//
//    //system("mode con cols=200");
//
//    if (fp == NULL)
//    {
//        printf("����\n");
//        exit(1);
//    }
//
//    while (fgets(str, 255, fp) != NULL)
//    {
//        printf(str);
//    }
//    puts("");
//
//    fclose(fp);
//} 
#pragma endregion

// �ܼ� �ؽ�Ʈ ���� �������ִ� �Լ�
void setColor(unsigned short text)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), text);
}

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
    //system("color F0");
    //SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_WHITE);
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
            Q1();

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
            goto feeding;
        }
        else if (menuCode == 1)//����
        {
            system("cls");
            printf(" �򸣸� �ش�.");
            Sleep(2000);
            goto HavingSnack;
        }
        else if (menuCode == 2)//����ֱ�
        {
            system("cls");
            printf(" �峭������ ����ش�.");
            Sleep(2000);
            goto PlayingCat;
        }
        else if (menuCode == 3)//���
        {
            system("cls");
            printf(" ����� ����� 2-3�޿� �� ���� �����ϴ�.");
            Sleep(2000);
            goto WashingCat;
        }
        else if (menuCode == 4)//��å
        {
            system("cls");
            printf(" ����̴� ��å�� �������� �ʽ��ϴ�.");
            Sleep(2000);
            goto WalkingCat;
        }
    }

feeding:;

    system("cls");
    printf(" \n");
    Health += 3;
    printf(" �������� 3 �ö����ϴ�.\n");
    Sleep(2000);
    goto SleepCat;


HavingSnack:;

    system("cls");
    printf(" \n");
    Feeling += 3;
    Health += 1;
    printf(" ����� 3 �ö����ϴ�.\n �������� 1 �ö����ϴ�.\n");
    Sleep(2000);
    goto SleepCat;

PlayingCat:;

    system("cls");
    printf(" \n");
    Feeling += 3;
    Health -= 3;
    printf(" ����� 3 �ö����ϴ�.\n �������� 3 ���������ϴ�.\n");
    Sleep(2000);
    goto SleepCat;

WashingCat:;

    system("cls");
    printf(" \n");
    Feeling -= 10;
    Health -= 3;
    printf(" ����� 10 ���������ϴ�.\n �������� 3 ���������ϴ�.\n");
    Sleep(2000);
    goto SleepCat;

WalkingCat:;

    system("cls");
    printf(" \n");
    Feeling -= 2;
    Health -= 2;
    printf(" ����� 2 ���������ϴ�.\n �������� 2 ���������ϴ�.\n");
    Sleep(2000);
    goto SleepCat;

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
#pragma endregion

//void Q1(int**** Health, int**** Feeling, int**** Friendliness, char**** catName, int**** Day, int**** Quest1Complete, int**** count)
//{
//    system("cls");
//
//    while (1)
//    {
//        int menuCode = Q1Draw();
//        if (menuCode == 0)
//        {
//            system("cls");
//            printf(" ���� �����ؼ� ���ִ� ���� �԰� ǫ �������ϴ�.\n ������ �Բ��� ����̴� �����ϴ�.\n �� ������ ����� Ű����Դϴ�.\n\n");
//            Sleep(1000);
//            EndingGameOver();
//        }
//        else if (menuCode == 1)
//        {
//            system("cls");
//            printf(" ����̿��� ���� �ɾ����� ������ ������ ����̰� ���� �����ϴ�.\n ����ϸ� �ٰ����� �ٶ��ϴ�.\n\n");
//            Sleep(1000);
//            EndingGameOver();
//        }
//        else if (menuCode == 2)
//        {
//            system("cls");
//            printf(" ���� �ɷ� �Ѿ����� ������� ������ �޾ҽ��ϴ�.\n");
//            Sleep(1000);
//            Q2(&&& Health, &&& Feeling, &&& Friendliness, &&& catName, &&& Day, &&& Quest1Complete, &&& count);
//        }
//    }
//}
//
//void Q2(int*** Health, int*** Feeling, int*** Friendliness, char*** catName, int*** Day, int*** Quest1Complete, int*** count)
//{
//
//    Sleep(3000);
//    system("cls");
//
//    while (1)
//    {
//        int menuCode = Q2Draw();
//        if (menuCode == 0)
//        {
//            system("cls");
//            //goto MapDoor;
//            MapDoor(&&Health, &&Feeling, &&Friendliness, &&catName, &&Day, &&Quest1Complete, &&count);
//        }
//        else if (menuCode == 1)
//        {
//            system("cls");
//            Q1(&&&&Health, &&&& Feeling, &&&& Friendliness, &&&& catName, &&&& Day, &&&& Quest1Complete, && count);
//        }
//
//    }
//}
//
//void MapDoor(int** Health, int** Feeling, int** Friendliness, char** catName, int** Day, int** Quest1Complete, int** count)
//{
//    int x = 1;int y = 2;
//
//    while (1)
//    {
//        Sleep(10);
//
//        if (GetAsyncKeyState('A') & 0x8000)//A
//        { //����
//            x--;
//        }
//        if (GetAsyncKeyState('D') & 0x8000)//D
//        { //������
//            x++;
//        }
//        if (GetAsyncKeyState('W') & 0x8000)//W
//        { //��
//            y--;
//        }
//        if (GetAsyncKeyState('S') & 0x8000)//S
//        { //�Ʒ�
//            y++;
//        }
//        if ((x <= 20 && x >= 10) && (y >= 15 && y <= 22))
//        {
//            gotoxy(1, 1);
//            //goto MapHouse;
//            MapHouse(&Health, &Feeling, &Friendliness, &catName, &Day, &Quest1Complete, &count);
//        }
//
//        system("cls");
//        gotoxy(x, y);
//        printf("('_')");
//        printf("(=  �����=)");
//
//        gotoxy(53, 1);printf("WSAD�� ����.");
//        gotoxy(1, 1); printf("����̿� �Բ� ������ ������.");
//
//        gotoxy(10, 15); printf("������");
//        gotoxy(10, 16); printf("��      ��");
//        gotoxy(10, 17); printf("��      ��");
//        gotoxy(10, 18); printf("��    @ ��");
//        gotoxy(10, 19); printf("��      ��");
//        gotoxy(10, 20); printf("��      ��");
//        gotoxy(10, 21); printf("��      ��");
//        gotoxy(10, 22); printf("������");
//
//    }
//}
//
//void MapHouse(int* Health, int* Feeling, int* Friendliness, char* catName, int* Day, int* Quest1Complete, int* count)
//{
//    system("cls");
//    int x = 1; int y = 1;
//
//    while (1)
//    {
//        Sleep(10);
//
//        while (1)
//        {
//            Sleep(10);
//
//            if (GetAsyncKeyState('A') & 0x8000)//A
//            { //����
//                x--;
//            }
//            if (GetAsyncKeyState('D') & 0x8000)//D
//            { //������
//                x++;
//            }
//            if (GetAsyncKeyState('W') & 0x8000)//W
//            { //��
//                y--;
//            }
//            if (GetAsyncKeyState('S') & 0x8000)//S
//            { //�Ʒ�
//                y++;
//            }
//            if ((x <= 50 && x >= 40) && (y >= 14 && y <= 15))
//            {
//                if (count == 1)
//                {
//                    goto Q3;
//                }
//                else if (count == 2);
//                {
//                    gotoxy(35, 28);printf("������: %d ���: %d ģ�е�: %d", *Health, *Feeling, *Friendliness);
//                }
//
//
//            }
//            if ((x <= 10 && x >= 0) && (y >= 23 && y <= 28))
//            {
//                //goto BringUpCat;
//                printf("�긵��Ĺ");
//            }
//
//
//            system("cls");
//            gotoxy(x, y);
//            printf("('_')");
//
//
//            gotoxy(53, 1);printf("WSAD�� ����.");
//            gotoxy(23, 25);printf("[����� ����� ���Դϴ�.]");
//            gotoxy(40, 14);printf("   ^    ^");
//            gotoxy(40, 15);printf("(=  �����=)");
//            gotoxy(40, 17);printf("   [%s]", *catName);
//            gotoxy(60, 2);printf("Day %d", *Day);
//
//            if (*Quest1Complete == 1)
//            {
//                gotoxy(0, 23);printf("\033[0;32m          ��");
//                gotoxy(2, 24); printf("\033[0;32m   ��    ");
//                gotoxy(2, 25); printf("\033[0;32m��    ��  ");
//                gotoxy(2, 26); printf("\033[0;32m����ֱ�  ");
//                gotoxy(2, 27); printf("\033[0;32m��    ��  ");
//                gotoxy(2, 28); printf("\033[0;32m��    å  ");
//            }
//
//        }
//
//    }
//}

















