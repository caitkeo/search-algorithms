//Sarah Watson
//This file contains our code for Heap sort.
//
#include "myheaders.h"
#include <iostream>

using namespace std;

void heap(long data[], long size, long i){
	long largest_num = i;
	long left = 2 * i + 1;
	long right = 2 * i + 2;

	if (left < size && data[left] > data[largest_num]){
		largest_num = left;
	}
	
	if(right < size && data[right] > data[largest_num]){
		largest_num = right;
	}
	
	if(largest_num != i){
		swap(data[i], data[largest_num]);
		heap(data, size, largest_num);
	}
}

void heapSort(long data[], long size){
	for(long i = (size / 2) -1; i >= 0; i--){
		heap(data, size, i);
	}
	
	for(long i = size - 1; i > 0; i--){
		swap(data[0], data[i]);
		heap(data, i, 0);
	}
}

