#include "main.h"

void WalkingCat(int* Health, int* Feeling)
{
    system("cls");
    printf(" \n");
    *Feeling -= 2;
    *Health -= 2;
    printf(" 기분이 2 내려갔습니다.\n 포만감이 2 내려갔습니다.\n");
    Sleep(2000);
}

void feeding(int* Health, int* Feeling)
{
    system("cls");
    printf(" \n");
    *Health += 3;
    printf(" 포만감이 3 올랐습니다.\n");
    Sleep(2000);
}


void HavingSnack(int* Health, int* Feeling)
{
    system("cls");
    printf(" \n");
    *Feeling += 3;
    *Health += 1;
    printf(" 기분이 3 올랐습니다.\n 포만감이 1 올랐습니다.\n");
    Sleep(2000);
}


void PlayingCat(int* Health, int* Feeling)
{
    system("cls");
    printf(" \n");
    *Feeling += 3;
    *Health -= 3;
    printf(" 기분이 3 올랐습니다.\n 포만감이 3 내려갔습니다.\n");
    Sleep(2000);
}


void WashingCat(int* Health, int* Feeling)
{
    system("cls");
    printf(" \n");
    *Feeling -= 10;
    *Health -= 3;
    printf(" 기분이 10 내려갔습니다.\n 포만감이 3 내려갔습니다.\n");
    Sleep(2000);
}
