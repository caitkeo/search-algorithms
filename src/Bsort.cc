//This file contains our code for Selection sort.
//Selection sort 
#include "myheaders.h"


// Your BSort function(s) go here
void BSort(long data[], long size){
	long i, j, min;
	for(i = 0; i < size -1; i++){
		min = i;
		for(j = 1 + i; j < size; j++){
			if(data[j] < data[min])
				min = j;
		}
		swap(data[min], data[i]);
	}
}
