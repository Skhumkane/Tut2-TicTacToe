#include<iostream>
using namespace std;
int player = 1;
char b[][3] = { { '1', '2', '3' }, { '4', '5', '6' }, { '7', '8', '9' } };
char selection;
int status();
void input();

void display();

int main()
{
	cout << "Below is an initial board" << endl;
	display();
	input();
	system("pause");
}
void display()
{
	int i, j;
	for (i = 0; i < 3; i++)
	{
		j = 0;
		cout << "|   |   |   |" << endl;
		cout << "  " << b[i][j] << "   " << b[i][j + 1] << "   " << b[i][j + 2] << endl;
		cout << "|___|___|___|" << endl;
	}
}
void input()
{
	int i, j;
	int d = 2;

		while (player <= 2)
		{
			if (player == 1)
			{
				cout << "Player_1's turn" << endl;
				cin >> selection;

				switch (selection)
				{
				case '1':
					i = 0; j = 0;
					b[i][j] = 'X';
					break;

				case '2':
					i = 0; j = 1;
					b[i][j] = 'x';
					break;

				case '3':
					i = 0; j = 2;
					b[i][j] = 'X';
					break;

				case '4':
					i = 1; j = 0;
					b[i][j] = 'X';
					break;

				case '5':
					i = 1; j = 1;
					b[i][j] = 'X';
					break;

				case '6':
					i = 1; j = 2;
					b[i][j] = 'X';
					break;

				case '7':
					i = 2; j = 0;
					b[i][j] = 'X';
					break;

				case '8':
					i = 2; j = 1;
					b[i][j] = 'X';
					break;

				case '9':
					i = 2; j = 2;
					b[i][j] = 'X';
					break;

				default:

					cout << "Invalid move!!! Player_1 please select the correct charecter" << endl;
					input();
					break;

				}
				display();

			}

			else
			{
				cout << "Player_2's turn" << endl;
				cin >> selection;
				switch (selection)
				{
				case '1':
					i = 0; j = 0;

					b[i][j] = 'Z';
					break;

				case '2':
					i = 0; j = 1;
					b[i][j] = 'Z';
					break;

				case '3':
					i = 0; j = 2;
					b[i][j] = 'Z';
					break;

				case '4':
					i = 1; j = 0;
					b[i][j] = 'Z';
					break;

				case '5':
					i = 1; j = 1;
					b[i][j] = 'Z';
					break;

				case '6':
					i = 1; j = 2;
					b[i][j] = 'Z';
					break;

				case '7':
					i = 2; j = 0;
					b[i][j] = 'Z';
					break;

				case '8':
					i = 2; j = 1;
					b[i][j] = 'Z';
					break;

				case '9':
					i = 2; j = 2;
					b[i][j] = 'Z';
					break;

				default:

					cout << "Invalid move!!! Player_2 please select the correct charecter" << endl;
					input();
					break;
				}
				display();

			}

			player++;
		}

		if (d == status())
			input();

}

int status()
{
	int i, j, c;
	c = 0;
	for (i = 0; i <= 2; i++)
	{
		if (i == 0)
		{
			for (j = 0; j <= 1; j++)
			{
				if (b[i][j] == b[i][j + 1])
					c++;
			}
			if (c != 2)
			{
				c = 0;
				j = 0;
				while (j <= 1)
				{
					if (b[j][i] == b[j + 1][i])
						c++;
					j++;
				}
			}
			if (c != 2)
			{
				c = 0;
				j = 0;
				while (j <= 1)
				{
					if (b[i][j] == b[i + 1][j+1])
						c++;
					j++;
				}
			}
		}
		else
			if (i == 1)
			{
			if (c != 2)
			{
				j = 0;
				c = 0;
				while (j <= 1)
				{
					if (b[i][j] == b[i][j + 1])
						c++;
					j++;
				}
			}
		}
		else
		{
			if (c != 2)
			{
				j = 0;
				c = 0;
				while (j <= 1)
				{
					if (b[i][j] == b[i][j + 1])
						c++;
					j++;
				}
			}
			if (c != 2)
			{
				j = 0;
				c = 0;
				while (j >= 0)
				{
					if (b[i][j] == b[i - 1][j + 1])
						c++;
					j++;
				}

			}
		}

	}
	return c;
}