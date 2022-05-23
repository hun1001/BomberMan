#include "console.h"

void gotoxy(int x, int y)
{
	HANDLE hout;
	COORD Cur;
	hout = GetStdHandle(STD_OUTPUT_HANDLE);
	Cur.X = x;
	Cur.Y = y;
	SetConsoleCursorPosition(hout, Cur);
}

void setcolor(int color, int bgcolor)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (bgcolor << 4) | color);
}

void hideCursor()
{
	CONSOLE_CURSOR_INFO cursorInfo = { 0, };
	cursorInfo.dwSize = 1;
	cursorInfo.bVisible = FALSE;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}

int GetRandom(int min, int max)
{
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> dis(min, max);
	return dis(gen);
}

POINT intToPoint(int x, int y)
{
	return POINT{ x, y };
}

bool IsPOINTEqual(const POINT p1, const POINT p2)
{
	if (p1.x == p2.x && p1.y == p2.y)
	{
		return true;
	}
	else
	{
		return false;
	}
	perror("Have problem");
	return false;
}

int wherex(void)
{
	CONSOLE_SCREEN_BUFFER_INFO info;
	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info);
	return info.dwCursorPosition.X;
}

void fullscreen()
{
	SetConsoleDisplayMode(GetStdHandle(STD_OUTPUT_HANDLE), CONSOLE_FULLSCREEN_MODE, 0);
}

void LetterIntegrate(char& letter)
{
	if (letter >= 'a' && letter <= 'z')
	{
		letter = letter - 32;
	}
}
