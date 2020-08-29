#include <iostream>
#include <ctime>
#include <conio.h>
#include "BetterPrint.h"
using namespace std;
int floors = 1;

void PRINTUP(int x, int y)
{
	int UP[4][14] = {
		{0,0,0,0,0,0,1,1,0,0,0,0,0,0},
		{0,0,0,0,1,1,0,0,1,1,0,0,0,0},
		{0,0,1,1,0,0,0,0,0,0,1,1,0,0},
		{1,1,0,0,0,0,0,0,0,0,0,0,1,1},
	};

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 14; j++)
		{
			if (UP[i][j] == 1)
			{
				MoveCursor(j + x, i + y);
				printf("#");
			}
		}
	}
}

void PRINTDOWN(int x, int y)
{
	{
		int UP[4][14] = {
			{1,1,0,0,0,0,0,0,0,0,0,0,1,1},
			{0,0,1,1,0,0,0,0,0,0,1,1,0,0},
			{0,0,0,0,1,1,0,0,1,1,0,0,0,0},
			{0,0,0,0,0,0,1,1,0,0,0,0,0,0},
		};

		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 14; j++)
			{
				if (UP[i][j] == 1)
				{
					MoveCursor(j + x, i + y);
					printf("#");
				}
			}
		}
	}
}

void PRINTNUM(int x, int y, int num)
{
	int NUM1[7][8] = {
		{0,0,0,1,1,0,0,0},
		{0,1,1,1,1,0,0,0},
		{0,0,0,1,1,0,0,0},
		{0,0,0,1,1,0,0,0},
		{0,0,0,1,1,0,0,0},
		{0,0,0,1,1,0,0,0},
		{0,1,1,1,1,1,1,0}
	};
	int NUM2[7][8] = {
		{1,1,1,1,1,1,1,1},
		{0,0,0,0,0,0,0,1},
		{0,0,0,0,0,0,0,1},
		{1,1,1,1,1,1,1,1},
		{1,0,0,0,0,0,0,0},
		{1,0,0,0,0,0,0,0},
		{1,1,1,1,1,1,1,1}
	};
	int NUM3[7][8] = {
		{1,1,1,1,1,1,1,1},
		{0,0,0,0,0,0,0,1},
		{0,0,0,0,0,0,0,1},
		{1,1,1,1,1,1,1,1},
		{0,0,0,0,0,0,0,1},
		{0,0,0,0,0,0,0,1},
		{1,1,1,1,1,1,1,1}
	};
	int NUM4[7][8] = {
		{1,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,1},
		{1,1,1,1,1,1,1,1},
		{0,0,0,0,0,0,0,1},
		{0,0,0,0,0,0,0,1},
		{0,0,0,0,0,0,0,1}
	};
	int NUM5[7][8] = {
		{1,1,1,1,1,1,1,1},
		{1,0,0,0,0,0,0,0},
		{1,0,0,0,0,0,0,0},
		{1,1,1,1,1,1,1,1},
		{0,0,0,0,0,0,0,1},
		{0,0,0,0,0,0,0,1},
		{1,1,1,1,1,1,1,1}
	};
	int NUM6[7][8] = {
		{1,1,1,1,1,1,1,1},
		{1,0,0,0,0,0,0,0},
		{1,0,0,0,0,0,0,0},
		{1,1,1,1,1,1,1,1},
		{1,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,1},
		{1,1,1,1,1,1,1,1}
	};
	int NUM7[7][8] = {
		{1,1,1,1,1,1,1,1},
		{0,0,0,0,0,0,1,1},
		{0,0,0,0,0,1,1,0},
		{0,0,0,1,1,0,0,0},
		{0,0,0,1,1,0,0,0},
		{0,0,0,1,1,0,0,0},
		{0,0,0,1,1,0,0,0}
	};
	int NUM8[7][8] = {
		{1,1,1,1,1,1,1,1},
		{1,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,1},
		{1,1,1,1,1,1,1,1},
		{1,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,1},
		{1,1,1,1,1,1,1,1}
	};
	int NUM9[7][8] = {
		{1,1,1,1,1,1,1,1},
		{1,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,1},
		{1,1,1,1,1,1,1,1},
		{0,0,0,0,0,0,0,1},
		{0,0,0,0,0,0,0,1},
		{1,1,1,1,1,1,1,1}
	};

	int* NUM_P[] = {
		NUM1[0],
		NUM2[0],
		NUM3[0],
		NUM4[0],
		NUM5[0],
		NUM6[0],
		NUM7[0],
		NUM8[0],
		NUM9[0],
	};

	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (*(NUM_P[num - 1] + i * 8 + j) == 1)
			{
				MoveCursor(x + j, y + i);
				printf("#");
			}
		}
	}
};

void FILL(int x1, int y1, int x2, int y2, char ch)
{
	for (int i = y1; i < y2; i++)
	{
		for (int j = x1; j < x2; j++)
		{
			MoveCursor(j, i);
			printf("%c", ch);
		}
	}
}

void UP(int movefloor)
{
	system("title 电梯正在上升...");
	system("cls");
	for (int z = 0; z < movefloor; z++)
	{
		PRINTNUM(13, 12, floors);
		for (int i = 6; i >= 0; i--)
		{
			FILL(10, 0, 24, 10, ' ');
			PRINTUP(10, i);
			Sleep(100);
		}
		FILL(13, 12, 21, 19, ' ');
		floors++;
	}
	system("cls");
	PRINTNUM(13, 12, floors);
	system("title 电梯空闲");
}

void DOWN(int movefloor)
{
	system("title 电梯正在下降...");
	system("cls");
	for (int z = 0; z < movefloor; z++)
	{
		PRINTNUM(13, 12, floors);
		for (int i = 0; i <= 6; i++)
		{
			FILL(10, 0, 24, 10, ' ');
			PRINTDOWN(10, i);
			Sleep(100);
		}
		FILL(13, 12, 21, 19, ' ');
		floors--;
	}
	system("cls");
	PRINTNUM(13, 12, floors);
	system("title 电梯空闲");
}

void Contral(int tofloor)
{
	if (tofloor == 100)
		UP(9 - floors);
	else if (tofloor == -100)
		DOWN(floors - 1);
	else if (tofloor > floors)
		UP(tofloor - floors);
	else if (tofloor < floors)
		DOWN(floors - tofloor);
	else if (tofloor == floors)
		return;
}

int main()
{
	printf("当出现\"电梯空闲\"时，使用方向键的'↑'或'↓'控制电梯上到9楼或下到1楼\n小键盘上任意数字键控制电梯移动到对应楼层\n");
	system("title 电梯空闲");
	SetFontColor(12);
	while (true)
	{
		switch (_getch())
		{
		case 72:
			Contral(100);
			break;
		case 80:
			Contral(-100);
			break;
		case 49:
			Contral(1);
			break;
		case 50:
			Contral(2);
			break;
		case 51:
			Contral(3);
			break;
		case 52:
			Contral(4);
			break;
		case 53:
			Contral(5);
			break;
		case 54:
			Contral(6);
			break;
		case 55:
			Contral(7);
			break;
		case 56:
			Contral(8);
			break;
		case 57:
			Contral(9);
			break;
		}
	}
}