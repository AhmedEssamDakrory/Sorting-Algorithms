#pragma once
#include <bits/stdc++.h>
// O(n*n). There is no best case nor worst case.
void selectionSort(int* arr , int size)  
{
	for(int i=0;i<size;i++)
	{
		int min = i ;
		for(int j=i+1;j<size;j++)
		{
			if(arr[j] < arr[min])
			{
				min = j ;
			}

		}
		int tmp = arr[i];
		arr[i] = arr[min];
		arr[min] = tmp;

	}
}
