#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <Windows.h>


#pragma region 춘식이
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
//        printf("실패\n");
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

// 콘솔 텍스트 색상 변경해주는 함수
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
    char catName[] = "고양이";
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


#pragma region Map 1. 길가에서 고양이 만남

    MapStreet : ;

    while (1)
    {

        Sleep(10);

        if (GetAsyncKeyState('A') & 0x8000)//A
        { //왼쪽
            x--;
        }
        if (GetAsyncKeyState('D') & 0x8000)//D
        { //오른쪽
            x++;
        }
        if (GetAsyncKeyState('W') & 0x8000)//W
        { //위
            y--;
        }
        if (GetAsyncKeyState('S') & 0x8000)//S
        { //아래
            y++;
        }
        if ((x <= 41 && x >= 30) && y == 10)
        {
            gotoxy(1, 1);
            goto Q1;

        }

        system("cls");
        gotoxy(x, y);
        printf("나('_')");

        gotoxy(30, 10); printf("고양이(=  ｀ω´=)");

    }


#pragma endregion


#pragma region Map 2. 문

    MapDoor : ;
    x = 1;y = 2;

    while (1)
    {
        Sleep(10);

        if (GetAsyncKeyState('A') & 0x8000)//A
        { //왼쪽
            x--;
        }
        if (GetAsyncKeyState('D') & 0x8000)//D
        { //오른쪽
            x++;
        }
        if (GetAsyncKeyState('W') & 0x8000)//W
        { //위
            y--;
        }
        if (GetAsyncKeyState('S') & 0x8000)//S
        { //아래
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
        printf("(=  ｀ω´=)");

        gotoxy(1, 1); printf("고양이와 함께 문으로 가세요.");

        gotoxy(10, 15); printf("□□□□□");
        gotoxy(10, 16); printf("□      □");
        gotoxy(10, 17); printf("□      □");
        gotoxy(10, 18); printf("□    @ □");
        gotoxy(10, 19); printf("□      □");
        gotoxy(10, 20); printf("□      □");
        gotoxy(10, 21); printf("□      □");
        gotoxy(10, 22); printf("□□□□□");

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
            { //왼쪽
                x--;
            }
            if (GetAsyncKeyState('D') & 0x8000)//D
            { //오른쪽
                x++;
            }
            if (GetAsyncKeyState('W') & 0x8000)//W
            { //위
                y--;
            }
            if (GetAsyncKeyState('S') & 0x8000)//S
            { //아래
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

            gotoxy(23, 25);printf("[여기는 당신의 집입니다.]");
            gotoxy(40, 14);printf("   ^    ^");
            gotoxy(40, 15);printf("(=  ｀ω´=)");
            gotoxy(40, 17);printf("   [%s]", catName);
            gotoxy(60, 2);printf("Day %d", Day);

            if (Quest1Complete == 1)
            {
                gotoxy(0, 23);printf("\033[0;32m          ㄱ");
                gotoxy(2, 24); printf("\033[0;32m   밥    ");
                gotoxy(2, 25); printf("\033[0;32m간    식  ");
                gotoxy(2, 26); printf("\033[0;32m놀아주기  ");
                gotoxy(2, 27); printf("\033[0;32m목    욕  ");
                gotoxy(2, 28); printf("\033[0;32m산    책  ");
            }


        }

    }

BringUpCat:;
    system("cls");

    while (1)
    {
        int menuCode = BringUpCatDraw();
        if (menuCode == 0)//밥
        {
            system("cls");
            printf(" 밥을 먹인다.");
            Sleep(2000);
            goto feeding;
        }
        else if (menuCode == 1)//간식
        {
            system("cls");
            printf(" 츄르를 준다.");
            Sleep(2000);
            goto HavingSnack;
        }
        else if (menuCode == 2)//놀아주기
        {
            system("cls");
            printf(" 장난감으로 놀아준다.");
            Sleep(2000);
            goto PlayingCat;
        }
        else if (menuCode == 3)//목욕
        {
            system("cls");
            printf(" 고양이 목욕은 2-3달에 한 번이 좋습니다.");
            Sleep(2000);
            goto WashingCat;
        }
        else if (menuCode == 4)//산책
        {
            system("cls");
            printf(" 고양이는 산책을 좋아하지 않습니다.");
            Sleep(2000);
            goto WalkingCat;
        }
    }

feeding:;

    system("cls");
    printf(" \n");
    Health += 3;
    printf(" 포만감이 3 올랐습니다.\n");
    Sleep(2000);
    goto SleepCat;


HavingSnack:;

    system("cls");
    printf(" \n");
    Feeling += 3;
    Health += 1;
    printf(" 기분이 3 올랐습니다.\n 포만감이 1 올랐습니다.\n");
    Sleep(2000);
    goto SleepCat;

PlayingCat:;

    system("cls");
    printf(" \n");
    Feeling += 3;
    Health -= 3;
    printf(" 기분이 3 올랐습니다.\n 포만감이 3 내려갔습니다.\n");
    Sleep(2000);
    goto SleepCat;

WashingCat:;

    system("cls");
    printf(" \n");
    Feeling -= 10;
    printf(" 기분이 10 내려갔습니다.\n 포만감이 3 내려갔습니다.\n");
    Sleep(2000);
    goto SleepCat;

WalkingCat:;

    system("cls");
    printf(" \n");
    Feeling -= 2;
    Health -= 2;
    printf(" 기분이 2 내려갔습니다.\n 포만감이 2 내려갔습니다.\n");
    Sleep(2000);
    goto SleepCat;

SleepCat:;

    RaiseFriendliness(&Health, &Feeling, &Friendliness);
    EndCheck(&Health, &Feeling, &Friendliness, &Day);
    system("cls");
    printf(" \n");
    printf(" %s (이)야 자자\n", catName);
    printf(" 현재 포만감 %d, 기분 %d, 친밀도 %d\n", Health, Feeling, Friendliness);
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
            printf(" 집에 도착해서 맛있는 밥을 먹고 푹 쉬었습니다.\n 하지만 함께할 고양이는 없습니다.\n 이 게임은 고양이 키우기입니다.\n\n");
            EndingGameOver();
        }
        else if (menuCode == 1)
        {
            system("cls");
            printf(" 고양이에게 말을 걸었지만 경계심이 가득한 고양이가 도망 갔습니다.\n 배려하며 다가가길 바랍니다.\n\n");
            EndingGameOver();
        }
        else if (menuCode == 2)
        {
            system("cls");
            printf(" 돌에 걸려 넘어져서 고양이의 관심을 받았습니다.\n");
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
            printf("고양이의 이름을 입력해 주세요\n");
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

    printf("고양이 이름을 %s로 설정할까요?\n", catName);


    while (1)
    {
        int menuCode = Q4Draw();
        if (menuCode == 0)
        {
            system("cls");
            printf("고양이 이름은 %s입니다.\n", catName);
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
    printf("\n 고양이가 당신이 좋은 주인이라고 생각합니다.\n 이제 둘은 가족입니다.");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    exit(1);
};

void EndingHospital(int** Day, char* catName)
{
    system("cls");
    printf("\n  Day %d\n", **Day);
    printf(" %s(이)가 살이 많이 쪄서 병원에 입원해야 합니다.\n", *catName);
}

void RaiseFriendliness(int* Health, int* Feeling, int* Friendliness)
{
    if (*Health >= 5 && *Feeling >= 10)
    {
        *Friendliness += 10;
        printf("친밀도가 2 올랐습니다.\n");
    }
};













