#include <stdio.h>
#include "my_mat.h"
void A(int arr[][ARRAY_SIZE])
{
	for (int i = 0; i < ARRAY_SIZE; i++)
		for (int j = 0; j < ARRAY_SIZE; j++)
		{
			scanf("%d", &arr[i][j]);
		}
		for (int k = 0; k < ARRAY_SIZE; k++)
	{
		for (int i = 0; i < ARRAY_SIZE; i++)
		{
			if (i == k)
				continue;
			for (int j = 0; j < ARRAY_SIZE; j++)
			{
				if (j == k || i == j || arr[i][k] == 0 || arr[k][j] == 0)
					continue;
				if (arr[i][j] == 0)
					arr[i][j] = arr[i][k] + arr[k][j];
				else
				{
					if (arr[i][j] > arr[i][k] + arr[k][j])
						arr[i][j] = arr[i][k] + arr[k][j];
				}
			}
		}
	}
}
void B(int arr[][ARRAY_SIZE])
{
	int i,j;
	scanf("%d", &i);
	scanf("%d", &j);
	if (arr[i][j]>0)
		printf("True\n");
	else
		printf("False\n");
}

void C(int arr[][ARRAY_SIZE])
{
	int i,j;
	scanf("%d", &i);
	scanf("%d", &j);
	if(arr[i][j] != 0)
		printf("%d\n", arr[i][j]);
	else
		printf("-1\n");
}
