#include "main.h"

#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3
#define SUBMIT 4


int keyControl()
{
    char temp = getch();

    if (temp == 'w' || temp == 'W')
    {
        return UP;
    }
    else if (temp == 'a' || temp == 'A')
    {
        return LEFT;
    }
    else if (temp == 's' || temp == 'S')
    {
        return DOWN;
    }
    else if (temp == 'd' || temp == 'D')
    {
        return RIGHT;
    }
    else if (temp == ' ')
    {
        return SUBMIT;
    }
}

int Q1Draw()
{
    printf("고양이가 있습니다.\n");

    int x = 24;
    int y = 12;
    gotoxy(x, y - 2);printf("■■■■■■■■■■■■■■■");
    gotoxy(x, y - 1);printf("■                          ■");
    gotoxy(x - 2, y);printf("  ■  >  갈길 간다.           ■");
    gotoxy(x, y + 1);printf("■     말건다.              ■");
    gotoxy(x, y + 2);printf("■     돌에 걸려 넘어진다.  ■");
    gotoxy(x, y + 3);printf("■                          ■");
    gotoxy(x, y + 4);printf("■■■■■■■■■■■■■■■");
    while (1)
    {
        int n = keyControl();
        switch (n)
        {
        case UP:
        {
            if (y > 12)
            {
                gotoxy(x + 4, y);
                printf(" ");
                gotoxy(x + 4, --y);
                printf(">");
            }
            break;
        }

        case DOWN:
        {
            if (y < 14)
            {
                gotoxy(x + 4, y);
                printf(" ");
                gotoxy(x + 4, ++y);
                printf(">");
            }
            break;
        }

        case SUBMIT:
        {
            return y - 12;
        }
        }
    }
}

int Q2Draw()
{
    printf(" 고양이가 키워 달라고 합니다\n 당신의 선택은?\n");

    int x = 24;
    int y = 12;
    gotoxy(x, y - 2);printf("■■■■■■■■■■■■■■■");
    gotoxy(x, y - 1);printf("■                          ■");
    gotoxy(x - 2, y);printf("  ■  >  집에 데려가기.       ■");
    gotoxy(x, y + 1);printf("■     뒤로                 ■");
    gotoxy(x, y + 2);printf("■                          ■");
    gotoxy(x, y + 3);printf("■■■■■■■■■■■■■■■");
    while (1)
    {
        int n = keyControl();
        switch (n)
        {
        case UP:
        {
            if (y > 12)
            {
                gotoxy(x + 4, y);
                printf(" ");
                gotoxy(x + 4, --y);
                printf(">");
            }
            break;
        }

        case DOWN:
        {
            if (y < 13)
            {
                gotoxy(x + 4, y);
                printf(" ");
                gotoxy(x + 4, ++y);
                printf(">");
            }
            break;
        }

        case SUBMIT:
        {
            return y - 12;
        }
        }
    }
}




int Q3Draw()
{
    system("cls");
    printf("고양이 이름을 지어주시겠습니까\n");

    int x = 24;
    int y = 12;
    gotoxy(x, y - 2);printf("■■■■■■■■■■");
    gotoxy(x, y - 1);printf("■                ■");
    gotoxy(x - 2, y);printf("  ■  >  네         ■");
    gotoxy(x, y + 1);printf("■     아니오     ■");
    gotoxy(x, y + 2);printf("■                ■");
    gotoxy(x, y + 3);printf("■■■■■■■■■■");
    while (1)
    {
        int n = keyControl();
        switch (n)
        {
        case UP:
        {
            if (y > 12)
            {
                gotoxy(x + 4, y);
                printf(" ");
                gotoxy(x + 4, --y);
                printf(">");
            }
            break;
        }

        case DOWN:
        {
            if (y < 13)
            {
                gotoxy(x + 4, y);
                printf(" ");
                gotoxy(x + 4, ++y);
                printf(">");
            }
            break;
        }

        case SUBMIT:
        {
            return y - 12;
        }
        }
    }
}

int Q4Draw()
{

    int x = 24;
    int y = 12;
    gotoxy(x, y - 2);printf("■■■■■■■■■■");
    gotoxy(x, y - 1);printf("■                ■");
    gotoxy(x - 2, y);printf("  ■  >  네         ■");
    gotoxy(x, y + 1);printf("■     아니오     ■");
    gotoxy(x, y + 2);printf("■                ■");
    gotoxy(x, y + 3);printf("■■■■■■■■■■");
    while (1)
    {
        int n = keyControl();
        switch (n)
        {
        case UP:
        {
            if (y > 12)
            {
                gotoxy(x + 4, y);
                printf(" ");
                gotoxy(x + 4, --y);
                printf(">");
            }
            break;
        }

        case DOWN:
        {
            if (y < 13)
            {
                gotoxy(x + 4, y);
                printf(" ");
                gotoxy(x + 4, ++y);
                printf(">");
            }
            break;
        }

        case SUBMIT:
        {
            return y - 12;
        }
        }
    }
}

int BringUpCatDraw()
{

    int x = 24;
    int y = 12;
    gotoxy(x, y - 2);printf("■■■■■■■■■■■");
    gotoxy(x, y - 1);printf("■                  ■");
    gotoxy(x - 2, y);printf("  ■  >     밥        ■");
    gotoxy(x, y + 1);printf("■     간    식     ■");
    gotoxy(x, y + 2);printf("■     놀아주기     ■");
    gotoxy(x, y + 3);printf("■     목    욕     ■");
    gotoxy(x, y + 4);printf("■     산    책     ■");
    gotoxy(x, y + 5);printf("■                  ■");
    gotoxy(x, y + 6);printf("■■■■■■■■■■■");

    while (1)
    {
        int n = keyControl();
        switch (n)
        {
        case UP:
        {
            if (y > 12)
            {
                gotoxy(x + 4, y);
                printf(" ");
                gotoxy(x + 4, --y);
                printf(">");
            }
            break;
        }

        case DOWN:
        {
            if (y < 16)
            {
                gotoxy(x + 4, y);
                printf(" ");
                gotoxy(x + 4, ++y);
                printf(">");
            }
            break;
        }

        case SUBMIT:
        {
            return y - 12;
        }
        }
    }
}


int MenuDraw()
{
    int x = 30;
    int y = 20;

    gotoxy(27, 10);
    printf("[고양이 키우기]");
    gotoxy(x - 2, y);
    printf("> 게 임 시 작");
    gotoxy(x, y + 1);
    printf("게 임 정 보");
    gotoxy(x, y + 2);
    printf("   종료   ");
    while (1)
    {
        int n = keyControl();
        switch (n)
        {
        case UP:
        {
            if (y > 20)
            {
                gotoxy(x - 2, y);
                printf(" ");
                gotoxy(x - 2, --y);
                printf(">");
            }
            break;
        }

        case DOWN:
        {
            if (y < 22)
            {
                gotoxy(x - 2, y);
                printf(" ");
                gotoxy(x - 2, ++y);
                printf(">");
            }
            break;
        }

        case SUBMIT:
        {
            return y - 20;
        }
        }
    }
};

int InfoDraw()
{ 
    printf("\n  안녕하세요. 고양이키우기 게임입니다.\n");
    printf("  고양이의 욕구(포만감, 기분, 친밀도)를 충족 시키십시오.\n\n\n");
    printf(" *집에서 왼쪽 하단에 있는 육성메뉴 설명.\n\n");
    printf("  밥: 포만감 +3\n");
    printf("  간식: 포만감 +1, 기분 +3\n");
    printf("  놀아주기: 포만감 -3, 기분 +3\n");
    printf("  목욕: 포만감 -3, 기분 -10\n");
    printf("  산책: 포만감 -2, 기분 -2\n");
    printf("  (친밀도는 포만감 5이상 기분 10이상일때 2씩 올라간다.)\n\n\n");

    printf(" *3개의 엔딩\n\n");
    printf("  게임 오버: 포만감 or 기분이 0이하일때\n");
    printf("  해피 엔딩: 포만감, 기분, 친밀도 모두 10이상일때\n");
    printf("  병원 엔딩: 포만감이 15이상일때\n\n\n\n");

    printf("\t\t      [스페이스바 누르면 뒤로]");
           
    while (1)
    {

        if (keyControl() == SUBMIT)
        {
            system("cls");
            break;
        }

    }
};