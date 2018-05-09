#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>
#define _WIN32_WINNT 0x0500
#include <windows.h>

using namespace std;

void resizeConsole(int width, int height);
void SetBGColor(WORD color);
void clrscr();
void textcolor(int x);
void gotoxy(int x,int y);

