#include "pch.h"
#include <iostream>
#define N 4


int minSum(int arr[N][N], int n, int m)
{
	
	for (int i = n - 1; i >= 0; --i)
	{
		for (int j = 0; j <= i; ++j)
		{
			if (arr[i + 1][j] < arr[i + 1][j + 1])
				arr[i][j] += arr[i + 1][j];
			else
				arr[i][j] += arr[i + 1][j + 1];
		}
	}


	return arr[0][0];
}


int main()
{
	int arr[N][N] = {  {2, 0, 0, 0},
					   {3, 4, 0, 0},
					   {6, 5, 7, 0},
	                   {4, 1, 8, 3} };

	std::cout << minSum(arr, 3, 3);
}
