#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void map()
{
	check_win(int map[][])
}

int main(void)
{
	char board[10][10];

	int xpos = 1, ypos = 1;
	int k, i;

	for (int y = 0; y < 10; y++)
		for (int x = 0; x < 10; x++)
			board[y][x] = '.';

	board[ypos][xpos] = '#';
	board[9][9] = 'G';
	board[5][5] = 'M';
	board[6][7] = 'M';

	printf("���� �̵� : a, ������ �̵�: d, ���� �̵�: w, �Ʒ��� �̵�: s\n");

	while (1)
	{
		system("cls");
		printf("���� �̵�: a, ������ �̵�: d, ���� �̵�: w, �Ʒ��� �̵�: s\n");

		for (int y = 0; y < 10; y++)
		{
			for (int x = 0; x < 10; x++)
				printf("%c", board[y][x]);
			printf("\n");
		}
		board[ypos][xpos] = '.';

		int ch = _getch();

		if (ch == 'a')
			xpos--;
		else if (ch == 's')
			ypos++;
		else if (ch == 'w')
			ypos--;
		else if (ch == 'd')
			xpos++;

		board[ypos][xpos] = '#';
	}

	return 0; //�ִ� ��� ���: 4!5! * 2!1! * 2!4! = 276,480
	//�� 28�� ����
}