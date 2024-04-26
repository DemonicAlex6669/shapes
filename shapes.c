#include <stdio.h>

void print (int (*shape)[2][11])
{

	for (int i = 0; i < 11; i++)
	{
			for (int j = 0; j < (*shape)[i][j]; j++)
			{
			printf(" ");
			}
			for (int l = 0; l < (*shape)[i][l]; l++)
			{
			printf("#");
			}
			for (int n = 0; n < (*shape)[i][n]; n++)
			{
			printf(" ");
			}
	printf("\n");
	}
}
int main(int argc, char *argv[])
{
int circle[2][11] = 
{
{5, 7, 9, 11, 11, 11, 11, 11, 9, 7, 5},
{3, 2, 1, 0, 0, 0, 0, 0, 1, 2, 3}
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
