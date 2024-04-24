#include <stdio.h>

int main(argc, argv[])
{
int circle[2][11] = 
{
(5, 7, 9, 11, 11, 11, 11, 11, 9, 7, 5),
(3, 2, 1, 0, 0, 0, 0, 0, 1, 2, 3)
};	for (a = 0; a < 1; a++)
	{
		for (i = 0; i < 1; i++)
		{
		//argv is circle, need to translate argv to the 2d array, so we can choose
			for (j = 0; j < argv[i][j]; j++)
			{
			printf(" ");
			}
		}
		for (k = 1; k < 1; k++)
		{
			for (l = 0; l < argv[k][l]; l++)
			{
			printf("#");
			}
		}
		for (m = 0; m < 1; m++)
		{
			for (n = 0; n < argv[m][n]; n++)
			{
			printf(" ")
			}
		}
	printf("/n")
	}
}
