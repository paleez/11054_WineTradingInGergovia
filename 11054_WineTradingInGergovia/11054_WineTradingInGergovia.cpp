// 11054_WineTradingInGergovia.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


/*

Please also take the negative number of bottles as some goods.
Moving a negative number of bottles from left to right means moving a positive number of bottles from right to left.
No matter what the leftest number is, we have to carry the number of bottles to the next house.
So we just carry all the bottle from left to right and calculate the cost.

*/
int main()
{
	int n;
	while (std::cin >> n)
	{
		if (n == 0)
		{
			break;
		}

		long long int bos = 0;
		long long int maw = 0;
		long long int wb = 0;
		
		for (int i = 0; i < n; i++)
		{
			std::cin >> wb;
			bos += wb;
			if (bos < 0) 
			{
				maw -= bos;
			}
			else
			{
				maw += bos;
			}
		}
		std::cout << maw << std::endl;
	}
    return 0;
}

