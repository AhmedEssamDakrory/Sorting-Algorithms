#pragma once
#include<bits/stdc++.h>
using namespace std;

int partition(int* arr , int first,int last)
{
	int i = first-1;
	int pivot = arr[last];
	for(int j = first ; j<= last-1 ; ++j)
	{
		if(arr[j] < pivot)
		{
		     i++;
		     swap(arr[j] , arr[i]);
		}
	}
	swap(arr[i+1] , arr[last]);
	return i+1;
}


int random_partition(int* arr ,int first , int last)
{
	 srand(time(NULL)); 
   	 int random = first + rand() % (last - first); 
  
    	// Swap A[random] with A[high] 
    	swap(arr[random], arr[last]); 
  
    	return partition(arr, first, last); 
}



void quickSort(int* arr,int first,int last)
{
	if(first >= last) return ;
	int pivot = random_partition(arr , first , last);
	quickSort(arr , first , pivot-1);
	quickSort(arr , pivot+1 , last);
	
}

