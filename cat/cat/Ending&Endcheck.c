#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <Windows.h>

void EndCheck(int* Health, int* Feeling, int* Friendliness, int* Day, char* catName)
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
        EndingHospital(&Day, &catName);
    }


};

EndingGameOver()
{
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t --------------------\n");
    printf("\t\t\t|     GAME OVER      |\n");
    printf("\t\t\t --------------------\n");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");


    exit(1);
};

EndingHappy(int** Day)
{
    system("cls");
    printf("\n  Day %d\n", **Day);
    printf("\n 고양이가 당신이 좋은 주인이라고 생각합니다.\n 이제 둘은 가족입니다.");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    exit(1);
};

EndingHospital(int** Day, char** catName)
{
    system("cls");
    printf("\n  Day %d\n", **Day);
    printf(" %s(이)가 살이 많이 쪄서 병원에 입원해야 합니다.\n", *catName);
    exit(1);
}

void RaiseFriendliness(int* Health, int* Feeling, int* Friendliness)
{
    if (*Health >= 5 && *Feeling >= 10)
    {
        *Friendliness += 2;
        printf("친밀도가 2 올랐습니다.\n");
    }
};