#include <stdio.h>

void print (int (*shape)[2][11])
{
	//need to nest 6,27 into one loop
	for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j < 11; j++)
		{
		printf(" ");
		}
	}
	for (int k = 1; k < 2; k++)
	{
		for (int l = 0; l < 11; l++)
		{
		printf("#");
		}
	}

	for (int m = 0; m < 1; m++)
	{
		for (int n = 0; n < 11; n++)
		{
		printf(" ");
		}
	}
}
int main(int argc, char *argv[])
{
int circle[2][11] = 
{
{3, 2, 1, 0, 0, 0, 0, 0, 1, 2, 3},
{5, 7, 9, 11, 11, 11, 11, 11, 9, 7, 5}
};

	if (strcmp(argv[1], "circle") == 0)
	{
	print(&circle);
	}
	else
	{
	printf("invalid shape \n");
	}
}
