#include <iostream>
#include <conio.h>

using namespace std;

//Ÿ�� ��ġ ����. ���� 0�� ��ĭ, 1�� ��
int World[10][10] = {
	{ 01, 01, 01, 01, 01, 01, 01, 01, 01, 01 },
	{ 01, 00, 00, 00, 00, 00, 00 ,00, 00, 01 },
	{ 01, 00, 00, 00, 00, 00, 00 ,00, 00, 01 },
	{ 01, 00, 00, 00, 00, 00, 00 ,00, 00, 01 },
	{ 01, 00, 00, 00, 00, 00, 00 ,00, 00, 01 },
	{ 01, 00, 00, 00, 00, 00, 00 ,00, 00, 01 },
	{ 01, 00, 00, 00, 00, 00, 00 ,00, 00, 01 },
	{ 01, 00, 00, 00, 00, 00, 00 ,00, 00, 01 },
	{ 01, 00, 00, 00, 00, 00, 00 ,00, 00, 01 },
	{ 01, 01, 01, 01, 01, 01, 01, 01, 01, 01 }
};
char Tileset[10] = { ' ', '*', }; //� ����� �׷������� ���� ����

bool bIsRunning = true;

int PlayerX = 1;
int PlayerY = 1;
char PlayerShape = 'P';

int KeyCode = 0;

void Input()
{
	KeyCode = _getch();
}

void Process()
{
	switch (KeyCode)
	{
	case 'w':
		if (World[--PlayerY][PlayerX] != 0)
		{
			++PlayerY;
		}
		break;
	case 's':
		if (World[++PlayerY][PlayerX] != 0)
		{
			--PlayerY;
		}
		break;
	case 'a':
		if (World[PlayerY][--PlayerX] != 0)
		{
			++PlayerX;
		}
		break;
	case 'd':
		if (World[PlayerY][++PlayerX] != 0)
		{
			--PlayerX;
		}
		break;
	case 'q':
		bIsRunning = false;
		break;
	default:
		break;
	}
}

void Render()
{
	system("cls");
	for (int Y = 0; Y < 10; ++Y)
	{
		for (int X = 0; X < 10; ++X)
		{
			if (PlayerX == X && PlayerY == Y)
			{
				cout << PlayerShape;
			}
			else
			{
				cout << Tileset[World[Y][X]];
			}
			cout << ' ';
		}
		cout << endl;
	}
	cout << endl;
}

int main()
{

	//frame, DeltaSecond
	while (bIsRunning)
	{
		Input();
		
		Process();

		Render();
	}

	return 0;
}