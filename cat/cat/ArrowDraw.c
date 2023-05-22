#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <Windows.h>

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
    printf("����̰� �ֽ��ϴ�.\n");

    int x = 24;
    int y = 12;
    gotoxy(x, y - 2);printf("����������������");
    gotoxy(x, y - 1);printf("��                          ��");
    gotoxy(x - 2, y);printf("  ��  >  ���� ����.           ��");
    gotoxy(x, y + 1);printf("��     ���Ǵ�.              ��");
    gotoxy(x, y + 2);printf("��     ���� �ɷ� �Ѿ�����.  ��");
    gotoxy(x, y + 3);printf("��                          ��");
    gotoxy(x, y + 4);printf("����������������");
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
    printf(" ����̰� Ű�� �޶�� �մϴ�\n ����� ������?\n");

    int x = 24;
    int y = 12;
    gotoxy(x, y - 2);printf("����������������");
    gotoxy(x, y - 1);printf("��                          ��");
    gotoxy(x - 2, y);printf("  ��  >  ���� ��������.       ��");
    gotoxy(x, y + 1);printf("��     �ڷ�                 ��");
    gotoxy(x, y + 2);printf("��                          ��");
    gotoxy(x, y + 3);printf("����������������");
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
    printf("����� �̸��� �����ֽðڽ��ϱ�\n");

    int x = 24;
    int y = 12;
    gotoxy(x, y - 2);printf("�����������");
    gotoxy(x, y - 1);printf("��                ��");
    gotoxy(x - 2, y);printf("  ��  >  ��         ��");
    gotoxy(x, y + 1);printf("��     �ƴϿ�     ��");
    gotoxy(x, y + 2);printf("��                ��");
    gotoxy(x, y + 3);printf("�����������");
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
    gotoxy(x, y - 2);printf("�����������");
    gotoxy(x, y - 1);printf("��                ��");
    gotoxy(x - 2, y);printf("  ��  >  ��         ��");
    gotoxy(x, y + 1);printf("��     �ƴϿ�     ��");
    gotoxy(x, y + 2);printf("��                ��");
    gotoxy(x, y + 3);printf("�����������");
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
    gotoxy(x, y - 2);printf("������������");
    gotoxy(x, y - 1);printf("��                  ��");
    gotoxy(x - 2, y);printf("  ��  >     ��        ��");
    gotoxy(x, y + 1);printf("��     ��    ��     ��");
    gotoxy(x, y + 2);printf("��     ����ֱ�     ��");
    gotoxy(x, y + 3);printf("��     ��    ��     ��");
    gotoxy(x, y + 4);printf("��     ��    å     ��");
    gotoxy(x, y + 5);printf("��                  ��");
    gotoxy(x, y + 6);printf("������������");

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


int menuDraw()
{
    int x = 24;
    int y = 12;
    gotoxy(x - 2, y);
    printf("> �� �� �� ��");
    gotoxy(x, y + 1);
    printf("�� �� �� ��");
    gotoxy(x, y + 2);
    printf("   ����   ");
    while (1)
    {
        int n = keyControl();
        switch (n)
        {
        case UP:
        {
            if (y > 12)
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
            if (y < 14)
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
            return y - 12;
        }
        }
    }
}