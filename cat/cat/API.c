#include<stdio.h>
#include<Windows.h>

//API: �������α׷��� �����ϱ� ���� �Լ��� ����.

void gotoxy(int x, int y)
{
	// COORD Pos = { x - 1, y - 1 };
	 //COORD pos = { x * 2,y };
	COORD Cur = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
	//SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}



void CursorView(char show)
{
	HANDLE hConsole;
	CONSOLE_CURSOR_INFO ConsoleCursor;

	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	ConsoleCursor.bVisible = show;
	ConsoleCursor.dwSize = 1;

	SetConsoleCursorInfo(hConsole, &ConsoleCursor);
}