#pragma once
#include <bits/stdc++.h>

//worst case O(n*n)...best case O(n) when the array is already sorted...
void insertionSort(int* arr , int first , int last) 
{
	for(int i = first+1; i<= last ;i++)
	{
		int loc = i;
		int temp = arr[i];
		while(loc > first && arr[loc-1] > temp)
		{
			arr[loc] = arr[loc-1];
			loc--;

		}

		arr[loc] = temp;
	}
}
