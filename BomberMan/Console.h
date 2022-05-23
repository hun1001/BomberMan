#pragma once
#include <iostream>
#include <Windows.h>
#include <time.h>
#include <conio.h>
#include <io.h>
#include <fcntl.h>
#include <mmsystem.h>
#include <random>
#include <thread>

using namespace std;

void gotoxy(int x, int y);
void setcolor(int color, int bgcolor);
void fullscreen();
void hideCursor();

int GetRandom(int min, int max);

POINT intToPoint(int x, int y);

bool IsPOINTEqual(const POINT p1, const POINT p2);

void LetterIntegrate(char& letter);