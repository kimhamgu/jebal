#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <Windows.h>

int keyControl();
int MenuDraw();
int Q1Draw();
int Q2Draw();
int Q3Draw();
int Q4Draw();
int BringUpCatDraw();
void EndCheck(int* Health, int* Feeling, int* Friendliness, int* Day, char* catName);
EndingGameOver();
EndingHappy(int** Day);
void RaiseFriendliness(int* Health, int* Feeling, int* Friendliness);
EndingHospital(int** Day, char** catName);
int InfoDraw();
void WalkingCat(int* Health, int* Feeling);
void feeding(int* Health, int* Feeling);
void HavingSnack(int* Health, int* Feeling);
void PlayingCat(int* Health, int* Feeling);
void WashingCat(int* Health, int* Feeling);


void Q2(int*** Health, int*** Feeling, int*** Friendliness, char*** catName, int*** Day, int*** Quest1Complete, int*** count);
void MapHouse(int* Health, int* Feeling, int* Friendliness, char* catName, int* Day, int* Quest1Complete, int* count);
void MapDoor(int** Health, int** Feeling, int** Friendliness, char** catName, int** Day, int** Quest1Complete, int** count);
void Q1(int**** Health, int**** Feeling, int**** Friendliness, char**** catName, int**** Day, int**** Quest1Complete, int**** count);
