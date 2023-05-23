#include "main.h" 

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

void EndingHospital(int** Day, char** catName)
{
    system("cls");
    printf("\n  Day %d\n", **Day);
    printf(" %s(��)�� ���� ���� �Ǽ� ������ �Կ��ؾ� �մϴ�.\n", *catName);
    exit(1);
}

void RaiseFriendliness(int* Health, int* Feeling, int* Friendliness)
{
    if (*Health >= 5 && *Feeling >= 10)
    {
        *Friendliness += 2;
        printf("ģ�е��� 2 �ö����ϴ�.\n");
    }
};