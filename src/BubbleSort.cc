//This file contains our code for Bubble sort.
#include "myheaders.h"


// Your CSort function(s) go here
void bubbleSort(long data[], long size){
	for(long i = 0; i < size - i - 1; i++){
		for(long j = 0; j < size - i - 1; ++j){
			if(data[j] > data[j + 1]){
				swap(data[j], data[j + 1]);
			}
		}
	}
}
