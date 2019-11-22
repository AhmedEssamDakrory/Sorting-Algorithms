#pragma once
#include "insertionSort.h"
#include "quickSort.h"

/*
   Insertion sort works better with small sizes, 
   So I implemented this Hybrid Sort using 
   Randomized Quick Sort with base case 
   if size less than k then switch and use Insertion Sort instead.
   better K to use is almost 100. 
*/

void hybridSort(int* arr , int first , int last , int k)
{
	if(last-first+1 <= k) {
		insertionSort(arr , first , last);
		return ;
	}
	int pivot = random_partition(arr , first , last);
	hybridSort(arr ,first , pivot-1 , k);
	hybridSort(arr,pivot+1 , last , k);
}


