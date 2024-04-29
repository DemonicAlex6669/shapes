#include <stdio.h>

void print (int (*shape)[2][11])
{

	for (int i = 0; i < 11; i++)
	{
		for (int k = 0; k < 2; k++)
		{
			for (int a = 0; a < (*shape)[i][k]; a++)
			{
			printf(" ");
			}
			for (int b = 0; b < (*shape)[i][k]; b++)
			{
			printf("#");
			}
			for (int c = 0; c < (*shape)[i][k]; c++)
			{
			printf(" ");
			}
	printf("\n");
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
