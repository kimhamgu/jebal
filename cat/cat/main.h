#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <Windows.h>

int keyControl();  //키입력(W,S,A,D, SPACE BAR)을 받은 후 Map과 선택지를 가르키는 >를 움직이게 하는 키를 정의해두는 함수이다. WSAD,space bar를 숫자 0,1,2,3,5로 정의한 함수.
int MenuDraw();  //keyControl()의 반환 값으로 선택지를 가르키는 >를 움직이게 하고, 선택지를 출력하는 함수.
int Q1Draw();
int Q2Draw();
int Q3Draw();
int Q4Draw();
int BringUpCatDraw();
int InfoDraw();

void EndCheck(int* Health, int* Feeling, int* Friendliness, int* Day, char* catName);  //포만감, 기분, 친밀도에 따른 엔딩을 체크하는 함수.
void EndingGameOver(); //게임오버를 출력하는 함수.
void EndingHappy(int** Day); //해피엔딩을 출력하는 함수.
void EndingHospital(int** Day, char** catName); //병원엔딩을 출력하는 함수.

void RaiseFriendliness(int* Health, int* Feeling, int* Friendliness); //포만감, 기분 수치에 따라 증가하는 친밀도를 체크하는 함수.


void WalkingCat(int* Health, int* Feeling); //고양이와의 상호작용 메뉴에서 선택지에 맞는 욕구 수치를 출력하고 저장하는 함수.
void feeding(int* Health, int* Feeling);
void HavingSnack(int* Health, int* Feeling);
void PlayingCat(int* Health, int* Feeling);
void WashingCat(int* Health, int* Feeling);


//void Q2(int*** Health, int*** Feeling, int*** Friendliness, char*** catName, int*** Day, int*** Quest1Complete, int*** count);
//void MapHouse(int* Health, int* Feeling, int* Friendliness, char* catName, int* Day, int* Quest1Complete, int* count);
//void MapDoor(int** Health, int** Feeling, int** Friendliness, char** catName, int** Day, int** Quest1Complete, int** count);
//void Q1(int**** Health, int**** Feeling, int**** Friendliness, char**** catName, int**** Day, int**** Quest1Complete, int**** count);
