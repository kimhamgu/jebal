#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <Windows.h>


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

int keyControl();
int menuDraw();
int Q1Draw();
int Q2Draw();
int Q3Draw();
int Q4Draw();
int BringUpCatDraw();
int EndCheck(int* Health, int* Feeling, int* Friendliness, int* Day);
void EndingGameOver();
void EndingHappy(int** Day);
void RaiseFriendliness(int* Health, int* Feeling, int* Friendliness);

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
    /*int* pHealth;
    pHealth = &Health;*/

    SetConsoleTitle(TEXT("with cat"));
    //system("color F0");
    //SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_WHITE);
    system("mode con cols=70 lines=30");

    int x = 1;
    int y = 1;

    CursorView(0);
    gotoxy(x, y);


    goto Q3;
    //goto MapStreet;


#pragma region Map 1. �氡���� ����� ����

    MapStreet : ;

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

        gotoxy(30, 10); printf("�����(=  �����=)");

    }


#pragma endregion


#pragma region Map 2. ��

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
                else
                {
                    break;
                }


            }
            if ((x <= 10 && x >= 0) && (y >= 23 && y <= 28))
            {
                goto BringUpCat;
            }


            system("cls");
            gotoxy(x, y);
            printf("('_')");

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
    EndCheck(&Health, &Feeling, &Friendliness, &Day);
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
            EndingGameOver();
        }
        else if (menuCode == 1)
        {
            system("cls");
            printf(" ����̿��� ���� �ɾ����� ������ ������ ����̰� ���� �����ϴ�.\n ����ϸ� �ٰ����� �ٶ��ϴ�.\n\n");
            EndingGameOver();
        }
        else if (menuCode == 2)
        {
            system("cls");
            printf(" ���� �ɷ� �Ѿ����� ������� ������ �޾ҽ��ϴ�.\n");
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


int EndCheck(int* Health, int* Feeling, int* Friendliness, int* Day)
{
    if (*Health <= 0 || *Feeling <= 0)
    {
        EndingGameOver();
        return 0;
    }
    if (*Health >= 10 && *Feeling >= 10 && *Friendliness >= 10)
    {
        EndingHappy(&Day);
        return 0;
    }
    if (*Health >= 15)
    {
        //EndingHospital();
    }


};

void EndingGameOver()
{

    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t --------------------\n");
    printf("\t\t\t|     GAME OVER      |\n");
    printf("\t\t\t --------------------\n");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");


    exit(1);
};

void EndingHappy(int** Day)
{
    system("cls");
    printf("\n  Day %d\n", **Day);
    printf("\n ����̰� ����� ���� �����̶�� �����մϴ�.\n ���� ���� �����Դϴ�.");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    exit(1);
};

void EndingHospital(int** Day, char* catName)
{
    system("cls");
    printf("\n  Day %d\n", **Day);
    printf(" %s(��)�� ���� ���� �Ǽ� ������ �Կ��ؾ� �մϴ�.\n", *catName);
}

void RaiseFriendliness(int* Health, int* Feeling, int* Friendliness)
{
    if (*Health >= 5 && *Feeling >= 10)
    {
        *Friendliness += 10;
        printf("ģ�е��� 2 �ö����ϴ�.\n");
    }
};













