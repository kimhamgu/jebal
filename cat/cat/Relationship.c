#include "main.h"

void WalkingCat(int* Health, int* Feeling)
{
    system("cls");
    printf(" \n");
    *Feeling -= 2;
    *Health -= 2;
    printf(" ����� 2 ���������ϴ�.\n �������� 2 ���������ϴ�.\n");
    Sleep(2000);
}

void feeding(int* Health, int* Feeling)
{
    system("cls");
    printf(" \n");
    *Health += 3;
    printf(" �������� 3 �ö����ϴ�.\n");
    Sleep(2000);
}


void HavingSnack(int* Health, int* Feeling)
{
    system("cls");
    printf(" \n");
    *Feeling += 3;
    *Health += 1;
    printf(" ����� 3 �ö����ϴ�.\n �������� 1 �ö����ϴ�.\n");
    Sleep(2000);
}


void PlayingCat(int* Health, int* Feeling)
{
    system("cls");
    printf(" \n");
    *Feeling += 3;
    *Health -= 3;
    printf(" ����� 3 �ö����ϴ�.\n �������� 3 ���������ϴ�.\n");
    Sleep(2000);
}


void WashingCat(int* Health, int* Feeling)
{
    system("cls");
    printf(" \n");
    *Feeling -= 10;
    *Health -= 3;
    printf(" ����� 10 ���������ϴ�.\n �������� 3 ���������ϴ�.\n");
    Sleep(2000);
}
