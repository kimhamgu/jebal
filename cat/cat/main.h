#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <Windows.h>

int keyControl();  //Ű�Է�(W,S,A,D, SPACE BAR)�� ���� �� Map�� �������� ����Ű�� >�� �����̰� �ϴ� Ű�� �����صδ� �Լ��̴�. WSAD,space bar�� ���� 0,1,2,3,5�� ������ �Լ�.
int MenuDraw();  //keyControl()�� ��ȯ ������ �������� ����Ű�� >�� �����̰� �ϰ�, �������� ����ϴ� �Լ�.
int Q1Draw();
int Q2Draw();
int Q3Draw();
int Q4Draw();
int BringUpCatDraw();
int InfoDraw();

void EndCheck(int* Health, int* Feeling, int* Friendliness, int* Day, char* catName);  //������, ���, ģ�е��� ���� ������ üũ�ϴ� �Լ�.
void EndingGameOver(); //���ӿ����� ����ϴ� �Լ�.
void EndingHappy(int** Day); //���ǿ����� ����ϴ� �Լ�.
void EndingHospital(int** Day, char** catName); //���������� ����ϴ� �Լ�.

void RaiseFriendliness(int* Health, int* Feeling, int* Friendliness); //������, ��� ��ġ�� ���� �����ϴ� ģ�е��� üũ�ϴ� �Լ�.


void WalkingCat(int* Health, int* Feeling); //����̿��� ��ȣ�ۿ� �޴����� �������� �´� �屸 ��ġ�� ����ϰ� �����ϴ� �Լ�.
void feeding(int* Health, int* Feeling);
void HavingSnack(int* Health, int* Feeling);
void PlayingCat(int* Health, int* Feeling);
void WashingCat(int* Health, int* Feeling);


//void Q2(int*** Health, int*** Feeling, int*** Friendliness, char*** catName, int*** Day, int*** Quest1Complete, int*** count);
//void MapHouse(int* Health, int* Feeling, int* Friendliness, char* catName, int* Day, int* Quest1Complete, int* count);
//void MapDoor(int** Health, int** Feeling, int** Friendliness, char** catName, int** Day, int** Quest1Complete, int** count);
//void Q1(int**** Health, int**** Feeling, int**** Friendliness, char**** catName, int**** Day, int**** Quest1Complete, int**** count);
