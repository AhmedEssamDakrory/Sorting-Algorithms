#pragma once
#include<bits/stdc++.h>

void merge(int* arr , int first , int mid , int last)
{
	int n = last- first + 1;
	int* tempArr = new int[n];
	int first1 = first;
	int last1 = mid;
	int first2 = mid+1;
	int last2 =last;
	int j = 0;
	while( first1 <= last1 && first2 <= last2 )
	{
		if(arr[first1] <= arr[first2])
		{
			tempArr[j] = arr[first1++];
		}
		else if(arr[first2] <= arr[first1])
		{
			tempArr[j] = arr[first2++];
		}

		j++;
	}

	
	while(first1 <= last1)
	{
		tempArr[j++] = arr[first1++];
	}

	while(first2 <= last2)
	{
		tempArr[j++] = arr[first2++];
	}

	j = 0;

	for(int i=first;i<=last;i++)
	{
		arr[i] = tempArr[j++]; 
	}
}

void mergeSort(int* arr , int first , int last)  //o(nlogn) there is neither best case nor worst case... 
{
	if(first >= last)
		return ;
	int mid = first + (last-first)/2;
	mergeSort(arr,first,mid);
	mergeSort(arr,mid+1,last);
	merge(arr,first,mid,last);

}
