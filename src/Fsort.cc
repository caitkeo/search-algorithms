//This file contains our code for Quicksort.
#include "myheaders.h"
#include <iostream>

using namespace std;

void quickSort(long data[], long first, long last) {
	int lower = first+1, upper = last;
	swap(data[first],data[(first+last)/2]);
	long bound = data[first];
	while (lower <= upper) {
		while (bound > data[lower]) {
			lower++;
		}
		while (bound < data[upper]) {
			upper--;
		}
		if (lower < upper) {
			swap(data[lower++],data[upper--]);
		}
		else { 
			lower++;
		}
	}
	
	swap(data[upper],data[first]);
	if (first < upper-1) {
		quickSort(data,first,upper-1);
	}
	
	if (upper+1 < last) {
		quickSort(data,upper+1,last);
	}
}
