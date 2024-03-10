#include<iostream>
#include<conio.h>
#include<fstream>
#include<cstring>
#include<iomanip>
#include<windows.h>
#include<stdio.h>
#include<stdlib.h>
#include<dos.h>

using namespace std;

void SetColor(int ForgC)
{
	WORD wColor;

	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	if (GetConsoleScreenBufferInfo(hStdOut, &csbi))
	{
		wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
		SetConsoleTextAttribute(hStdOut, wColor);
	}
	return;
}
int f_horizontal(int x, int y, int k, char grid[][15], char words[][20], char colorgrid[][15], int numgrid[][15], int rowarr[15], int colarr[15])
{
	int  l = 1;
	int a = x, b = y;

	for (y++; y < 15; y++)
	{
		if (grid[x][y] == words[k][l])
		{
			l++;
			if (words[k][l] == ',')
			{
				for (l = 0; words[k][l] != ','; l++)
				{
					colorgrid[a][b] = words[k][l];
					numgrid[a][b] = numgrid[a][b] + 1;

					colarr[b] = colarr[b] + 1;
					b++;
				}
				rowarr[a] = rowarr[a] + 1;
				y = 15;
				return 1;

			}


		}

		else
		{
			y = 15;
			return 0;
		}
	}

}

int b_horizontal(int x, int y, int k, char grid[][15], char words[][20], char colorgrid[][15], int numgrid[][15], int rowarr[15], int colarr[15])
{


	int  l = 1;
	int a = x, b = y;
	for (y--; y >= 0; y--)
	{
		if (grid[x][y] == words[k][l])
		{
			l++;
			if (words[k][l] == ',')
			{
				for (l = 0; words[k][l] != ','; l++)
				{
					colorgrid[a][b] = words[k][l];
					numgrid[a][b] = numgrid[a][b] + 1;

					colarr[b] = colarr[b] + 1;
					b--;
				}
				rowarr[a] = rowarr[a] + 1;
				y = -1;
				return 1;
			}


		}

		else
		{
			y = -1;
			return 0;
		}

	}
}
int f_vertical(int x, int y, int k, char grid[][15], char words[][20], char colorgrid[][15], int numgrid[][15], int rowarr[15], int colarr[15])
{
	int  l = 1;
	int a = x, b = y;
	for (x++; x < 15; x++)
	{
		if (grid[x][y] == words[k][l])
		{
			l++;
			if (words[k][l] == ',')
			{
				for (l = 0; words[k][l] != ','; l++)
				{
					colorgrid[a][b] = words[k][l];
					numgrid[a][b] = numgrid[a][b] + 1;
					rowarr[a] = rowarr[a] + 1;

					a++;
				}
				colarr[b] = colarr[b] + 1;
				y = 15;
				return 1;
			}


		}

		else
		{
			y = 15;
			return 0;
		}

	}
}
int b_vertical(int x, int y, int k, char grid[][15], char words[][20], char colorgrid[][15], int numgrid[][15], int rowarr[15], int colarr[15])
{
	int  l = 1;
	int a = x, b = y;
	for (x--; x >= 0; x--)
	{
		if (grid[x][y] == words[k][l])
		{
			l++;
			if (words[k][l] == ',')
			{
				for (l = 0; words[k][l] != ','; l++)
				{
					colorgrid[a][b] = words[k][l];
					numgrid[a][b] = numgrid[a][b] + 1;
					rowarr[a] = rowarr[a] + 1;

					a--;
				}
				colarr[b] = colarr[b] + 1;
				y = 15;
				return 1;
			}


		}

		else
		{
			y = 15;
			return 0;
		}

	}
}
int downf_diagonal(int x, int y, int k, char grid[][15], char words[][20], char colorgrid[][15], int numgrid[][15], int rowarr[15], int colarr[15])
{

	int  l = 1;
	int a = x, b = y;
	for (x++, y++; x < 15 && y < 15; x++, y++)
	{
		if (grid[x][y] == words[k][l])
		{
			l++;
			if (words[k][l] == ',')
			{
				for (l = 0; words[k][l] != ','; l++)
				{
					colorgrid[a][b] = words[k][l];
					numgrid[a][b] = numgrid[a][b] + 1;
					rowarr[a] = rowarr[a] + 1;
					colarr[b] = colarr[b] + 1;
					a++;
					b++;
				}

				y = 15;
				x = 15;
				return 1;
			}


		}

		else
		{
			y = 15;
			x = 15;
			return 0;
		}
	}
	if (b == 14 || a == 14)
	{
		return 0;
	}
}
int downb_diagonal(int x, int y, int k, char grid[][15], char words[][20], char colorgrid[][15], int numgrid[][15], int rowarr[15], int colarr[15])
{
	int  l = 1;
	int a = x, b = y;
	for (x--, y--; x >= 0 || y >= 0; x--, y--)
	{
		if (grid[x][y] == words[k][l])
		{
			l++;
			if (words[k][l] == ',')
			{
				for (l = 0; words[k][l] != ','; l++)
				{
					colorgrid[a][b] = words[k][l];
					numgrid[a][b] = numgrid[a][b] + 1;
					rowarr[a] = rowarr[a] + 1;
					colarr[b] = colarr[b] + 1;
					a--;
					b--;
				}

				y = -1;
				x = -1;
				return 1;
			}


		}

		else
		{
			y = -1;
			x = -1;
			return 0;
		}


	}
	if (b == 0 || a == 0)
	{
		return 0;
	}
}
int upf_diagonal(int x, int y, int k, char grid[][15], char words[][20], char colorgrid[][15], int numgrid[][15], int rowarr[15], int colarr[15])
{

	int  l = 1;
	int a = x, b = y;
	for (x--, y++; x >= 0 && y < 15; x--, y++)
	{
		if (grid[x][y] == words[k][l])
		{
			l++;
			if (words[k][l] == ',')
			{
				for (l = 0; words[k][l] != ','; l++)
				{
					colorgrid[a][b] = words[k][l];
					numgrid[a][b] = numgrid[a][b] + 1;
					rowarr[a] = rowarr[a] + 1;
					colarr[b] = colarr[b] + 1;
					a--;
					b++;
				}

				y = 15;
				x = 0;
				return 1;
			}


		}

		else
		{
			y = 15;
			x = 0;
			return 0;
		}
	}
	if (b == 14 || a == 14)
	{
		return 0;
	}
}
int upb_diagonal(int x, int y, int k, char grid[][15], char words[][20], char colorgrid[][15], int numgrid[][15], int rowarr[15], int colarr[15])
{

	int  l = 1;
	int a = x, b = y;
	for (x++, y--; x < 15 || y >= 0; x++, y--)
	{
		if (grid[x][y] == words[k][l])
		{
			l++;
			if (words[k][l] == ',')
			{
				for (l = 0; words[k][l] != ','; l++)
				{
					colorgrid[a][b] = words[k][l];
					numgrid[a][b] = numgrid[a][b] + 1;
					rowarr[a] = rowarr[a] + 1;
					colarr[b] = colarr[b] + 1;
					a++;
					b--;
				}

				y = 0;
				x = 15;
				return 1;
			}


		}

		else
		{
			y = 0;
			x = 15;
			return 0;
		}
	}
	if (b == 14 || a == 14)
	{
		return 0;
	}
}
int sepwords(char alphabets[], char words[][20], int& max, int& min, int& avg)
{

	int i = 0, j = 0, k = 0, num_words = 0, sum = 0;



	for (i = 0; i < 60; i++)
	{
		for (j = 0; j < 20; j++)
		{
			if (alphabets[k] != '.' && alphabets[k] != ' ')
			{
				words[i][j] = alphabets[k];

				k++;

				if (j > max)
				{
					max = j;

				}
				if (j < min && j>3)
				{
					min = j;
				}
			}

			else if (alphabets[k] == ' ')
			{
				j = 20;
				k++;

			}
			else
			{
				words[i][j] = ',';

				j = 20;
				num_words = i;
				i = 60;
			}
		}
	}
	for (i = 0; alphabets[i] != '.'; i++)
	{
		sum++;
	}
	avg = sum / num_words;
	avg = avg - 2;

	return num_words;

}


ifstream inFile("C:\\Users\\HP\\Desktop\\j.txt");

int main()
{

	char ch;
	char grid[15][15];
	int row = 0;
	int column = 0;
	char alphabets[1000];
	int k = 0;
	int count = 0;
	int line = 1;
	int i = 0;
	int j = 0;
	int size = 0;
	int z = 1;
	char words[60][20];
	char colorgrid[15][15];
	int num_words = 0;
	int found = 0;
	int numgrid[15][15];
	char checkgrid[15][15];
	char a;
	int f_hor_count = 0, b_hor_count = 0, f_ver_count = 0, b_ver_count = 0, r_down_dia_count = 0, l_down_dia_count = 0, r_up_dia_count = 0, l_up_dia_count = 0;
	int hor_sum = 0, ver_sum = 0;
	int max = 0;
	int colmax = 0;
	int rowarr[15];
	int colarr[15];
	int longest = 0;
	int shortest = 15;
	int avg = 0;



	while (inFile.get(ch))
	{
		if (ch == '\n')
		{
			line++;
		}


		if (line <= 15)
		{
			if (ch != ' ' && ch != '\n')
			{
				grid[row][column] = ch;
				if (column == 14)
				{
					column = 0;
					row++;
				}
				else
				{
					column++;
				}
			}



		}
		if (line > 15 && ch != '\n')
		{

			alphabets[k] = ch;

			size++;
			k++;

		}


	}


	for (int k = 0; k < size; k++)
	{
		alphabets[k] = toupper(alphabets[k]);
	}

	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			colorgrid[i][j] = ' ';
		}
	}
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			numgrid[i][j] = '0';
		}
	}
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 15; j++)
		{
			cout << grid[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < size; i++)
	{
		cout << alphabets[i];
	}
	for (int k = 0; k < 15; k++)
	{
		rowarr[k] = 0;
	}

	cout << endl << endl;

	cout << "1. Press S to solve the puzzle at once.\n2. Press T to solve the puzzle step by step.\n3. Press X to print puzzle statistics.\n";
	cin >> a;
	num_words = sepwords(alphabets, words, longest, shortest, avg);
	k = 0;
	while (a == 't' || a == '\n')
	{
		for (i = 0; i < 15; i++)
		{
			for (j = 0; j < 15; j++)
			{
				if (numgrid[i][j] == '1')
				{
					SetColor(6);
					cout << grid[i][j] << " ";
				}
				if (numgrid[i][j] == '2')
				{
					SetColor(3);
					cout << grid[i][j] << " ";
				}
				if (numgrid[i][j] == '3' || numgrid[i][j] == '4' || numgrid[i][j] == '5')
				{
					SetColor(4);
					cout << grid[i][j] << " ";
				}
				if (numgrid[i][j] == '0')
				{
					SetColor(7);
					cout << grid[i][j] << " ";
				}
				else {
					SetColor(7);

				}

			}
			cout << endl;
		}


		for (int i = 0; i < 15; i++)
		{
			for (int j = 0; j < 15; j++)
			{
				if (grid[i][j] == words[k][0])
				{
					found = f_horizontal(i, j, k, grid, words, colorgrid, numgrid, rowarr, colarr);
					if (found == 1)
					{

						j = 15;
						i = 15;
						found = 0;

					}

				}
			}
		}




		for (int i = 0; i < 15; i++)
		{
			for (int j = 0; j < 15; j++)
			{
				if (grid[i][j] == words[k][0])
				{
					found = b_horizontal(i, j, k, grid, words, colorgrid, numgrid, rowarr, colarr);
					if (found == 1)
					{
						j = 15;
						i = 15;
						found = 0;

					}

				}
			}
		}



		for (int i = 0; i < 15; i++)
		{
			for (int j = 0; j < 15; j++)
			{
				if (grid[i][j] == words[k][0])
				{
					found = f_vertical(i, j, k, grid, words, colorgrid, numgrid, rowarr, colarr);
					if (found == 1)
					{
						j = 15;
						i = 15;
						found = 0;

					}

				}
			}
		}



		for (int i = 0; i < 15; i++)
		{
			for (int j = 0; j < 15; j++)
			{
				if (grid[i][j] == words[k][0])
				{
					found = b_vertical(i, j, k, grid, words, colorgrid, numgrid, rowarr, colarr);
					if (found == 1)
					{
						j = 15;
						i = 15;
						found = 0;

					}

				}
			}
		}




		for (int i = 0; i < 15; i++)
		{
			for (int j = 0; j < 15; j++)
			{
				if (grid[i][j] == words[k][0])
				{
					found = downf_diagonal(i, j, k, grid, words, colorgrid, numgrid, rowarr, colarr);
					if (found == 1)
					{
						j = 15;
						i = 15;
						found = 0;

					}

				}
			}
		}



		for (int i = 0; i < 15; i++)
		{
			for (int j = 0; j < 15; j++)
			{
				if (grid[i][j] == words[k][0])
				{
					found = downb_diagonal(i, j, k, grid, words, colorgrid, numgrid, rowarr, colarr);
					if (found == 1)
					{
						j = 15;
						i = 15;
						found = 0;

					}

				}
			}
		}



		for (int i = 0; i < 15; i++)
		{
			for (int j = 0; j < 15; j++)
			{
				if (grid[i][j] == words[k][0])
				{
					found = upf_diagonal(i, j, k, grid, words, colorgrid, numgrid, rowarr, colarr);
					if (found == 1)
					{
						j = 15;
						i = 15;
						found = 0;

					}

				}
			}
		}



		for (int i = 0; i < 15; i++)
		{
			for (int j = 0; j < 15; j++)
			{
				if (grid[i][j] == words[k][0])
				{
					found = upb_diagonal(i, j, k, grid, words, colorgrid, numgrid, rowarr, colarr);
					if (found == 1)
					{
						j = 15;
						i = 15;
						found = 0;

					}

				}
			}
		}



		cout << endl;
		if (k > num_words)
		{
			cout << endl << "TeleWord: ";
			for (int i = 0; i < 15; i++)
			{
				for (int j = 0; j < 15; j++)
				{

					if (grid[i][j] != colorgrid[i][j])
					{
						cout << grid[i][j];
					}
				}

			}
			cout << endl;
			return 0;
		}

		k++;
		cin >> a;
		cout << endl;
	}

	if (a == 's' || a == 'x')
	{

		for (int i = 0; i < 15; i++)
		{
			rowarr[i] = 0;
		}
		for (int i = 0; i < 15; i++)
		{
			colarr[i] = 0;
		}
		for (k = 0; k <= num_words; k++)
		{
			for (int i = 0; i < 15; i++)
			{
				for (int j = 0; j < 15; j++)
				{
					if (grid[i][j] == words[k][0])
					{
						found = f_horizontal(i, j, k, grid, words, colorgrid, numgrid, rowarr, colarr);
						if (found == 1)
						{

							j = 15;
							i = 15;
							found = 0;
							f_hor_count++;

						}

					}
				}
			}
		}
		for (k = 0; k <= num_words; k++)
		{
			for (int i = 0; i < 15; i++)
			{
				for (int j = 0; j < 15; j++)
				{
					if (grid[i][j] == words[k][0])
					{
						found = b_horizontal(i, j, k, grid, words, colorgrid, numgrid, rowarr, colarr);
						if (found == 1)
						{

							j = 15;
							i = 15;
							found = 0;
							b_hor_count++;
						}

					}
				}
			}
		}
		for (k = 0; k <= num_words; k++)
		{
			for (int i = 0; i < 15; i++)
			{
				for (int j = 0; j < 15; j++)
				{
					if (grid[i][j] == words[k][0])
					{
						found = f_vertical(i, j, k, grid, words, colorgrid, numgrid, rowarr, colarr);
						if (found == 1)
						{

							j = 15;
							i = 15;
							found = 0;
							f_ver_count++;
						}

					}
				}
			}
		}
		for (k = 0; k <= num_words; k++)
		{
			for (int i = 0; i < 15; i++)
			{
				for (int j = 0; j < 15; j++)
				{
					if (grid[i][j] == words[k][0])
					{
						found = b_vertical(i, j, k, grid, words, colorgrid, numgrid, rowarr, colarr);
						if (found == 1)
						{

							j = 15;
							i = 15;
							found = 0;
							b_ver_count++;
						}

					}
				}
			}
		}

		for (k = 0; k <= num_words; k++)
		{
			for (int i = 0; i < 15; i++)
			{
				for (int j = 0; j < 15; j++)
				{
					if (grid[i][j] == words[k][0])
					{
						found = downf_diagonal(i, j, k, grid, words, colorgrid, numgrid, rowarr, colarr);
						if (found == 1)
						{

							j = 15;
							i = 15;
							found = 0;
							r_down_dia_count++;

						}

					}
				}
			}
		}
		for (k = 0; k <= num_words; k++)
		{
			for (int i = 0; i < 15; i++)
			{
				for (int j = 0; j < 15; j++)
				{
					if (grid[i][j] == words[k][0])
					{
						found = downb_diagonal(i, j, k, grid, words, colorgrid, numgrid, rowarr, colarr);
						if (found == 1)
						{

							j = 15;
							i = 15;
							found = 0;
							r_up_dia_count++;
						}

					}
				}
			}
		}
		for (k = 0; k <= num_words; k++)
		{
			for (int i = 0; i < 15; i++)
			{
				for (int j = 0; j < 15; j++)
				{
					if (grid[i][j] == words[k][0])
					{
						found = upf_diagonal(i, j, k, grid, words, colorgrid, numgrid, rowarr, colarr);
						if (found == 1)
						{

							j = 15;
							i = 15;
							found = 0;
							l_up_dia_count++;
						}

					}
				}
			}
		}
		for (k = 0; k <= num_words; k++)
		{
			for (int i = 0; i < 15; i++)
			{
				for (int j = 0; j < 15; j++)
				{
					if (grid[i][j] == words[k][0])
					{
						found = upb_diagonal(i, j, k, grid, words, colorgrid, numgrid, rowarr, colarr);
						if (found == 1)
						{

							j = 15;
							i = 15;
							found = 0;
							l_down_dia_count++;
						}

					}
				}
			}
		}

		cout << endl;
		for (int i = 0; i < 15; i++)
		{
			for (int j = 0; j < 15; j++)
			{
				if (numgrid[i][j] == '1')
				{
					SetColor(6);
					cout << grid[i][j] << " ";
				}
				if (numgrid[i][j] == '2')
				{
					SetColor(3);
					cout << grid[i][j] << " ";
				}
				if (numgrid[i][j] == '3' || numgrid[i][j] == '4' || numgrid[i][j] == '5')
				{
					SetColor(4);
					cout << grid[i][j] << " ";
				}
				if (numgrid[i][j] == '0')
				{
					SetColor(7);
					cout << grid[i][j] << " ";
				}
				else {
					SetColor(7);

				}

			}
			cout << endl;
		}
		cout << endl;




		if (a == 'x')
		{
			int a = 0;
			for (int i = 0; i < 15; i++)
			{
				if (rowarr[i] > max)
				{
					max = rowarr[i];
					a = i;
				}
			}
			max = a;
			a = 0;
			colmax = 0;
			for (int i = 0; i < 15; i++)
			{
				if (colarr[i] > colmax)
				{
					colmax = colarr[i];
					a = i;
				}
			}
			colmax = a;



			cout << "Word Distribution: Horizontal " << f_hor_count + b_hor_count << " (" << f_hor_count << "," << b_hor_count << ") , vertical: " << f_ver_count + b_ver_count << " (" << f_ver_count << "," << b_ver_count << ") " << "Diagonal: " << r_down_dia_count + l_up_dia_count + l_down_dia_count + r_up_dia_count << " (" << r_down_dia_count + l_up_dia_count << "," << l_down_dia_count + r_up_dia_count << ")" << endl << endl;

			cout << "Heaviest Row: " << max << endl;

			cout << "Heaviest column: " << colmax << endl;
			cout << "longest word: " << longest << endl;
			cout << "shortest word: " << shortest << endl;
			cout << "average length: " << avg << endl;
			int scatter = 0;
			for (int i = 0; i < 15; i++)
			{

				for (int j = 0; j < 15; j++)
				{
					if (numgrid[i][j] == '0')
					{
						scatter++;
						j = 15;
					}
				}
			}
			cout << "Teleword Scatter: " << scatter << endl << endl;
		}
	}

	else
	{
		cout << "invalid charecter entered" << endl << endl;
		for (int i = 0; i < 15; i++)
		{
			for (int j = 0; j < 15; j++)
			{
				cout << grid[i][j] << " ";

			}
			cout << endl;
		}
		cout << endl;
		for (int k = 0; k < size; k++)
		{
			cout << alphabets[k];
		}
		return 0;
	}
	cout << endl;
	for (int k = 0; k < size; k++)
	{
		cout << alphabets[k];
	}
	cout << endl;
	cout << endl << "TeleWord: ";
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 15; j++)
		{

			if (grid[i][j] != colorgrid[i][j])
			{
				cout << grid[i][j];
			}
		}

	}
	cout << endl;

	return 0;
}
