#include <stdio.h>
#include "my_mat.h"
int main(int argc, char **argv)
{
	char f;
	//printf( "argc = %d\n", argc );
//	printf("enter A or B or C or D\n");
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
	//	printf("enter A or B or C or D\n");
		int n = scanf(" %c", &f);
	}
	
}

