#include <stdio.h>
#include "my_mat.h"
int main(int argc, char **argv)
{
	char f;
	scanf("%c", &f);
	int arr[ARRAY_SIZE][ARRAY_SIZE];
	while (f!='D')
	{
		if(f=='A')
			A(arr);
		else if(f=='B')
			B(arr);
		else if(f=='C')
			C(arr);
		int n = scanf(" %c", &f);
	}
	
}

