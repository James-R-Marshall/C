#include "sort.h"
#include <iostream>

void Sort::print(int* arr,int size){
	for(int i = 0; i < size; i++){
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
	return;
}

void Sort::bubble(int* arr, int size){
	int holder = 0;
	for(int x = 0; x < size; x++){
	for (int i = 0; i < size - 1; i ++){
		if(arr[i] > arr[i+1]){
			holder = arr[i];
			arr[i] = arr[i+1];
			arr[i+1] = holder;
		}
	}
	}
	return;
}

void Sort::split(int* arr, int start, int end){
	if (end - start < 2){
		return;
	}
	int mid = 0;
	mid = start + (end - start)/2;
	split(arr, start, mid);
	split(arr, mid + 1, end);
	return m(arr, start, mid, mid+1, end);
}

void Sort::m(int* arr,int start,int mid,int mid2,int end){
	int holder = 0;
	int* arr1 = new int[mid];
	int* arr2 = new int[end-mid2];
	int i1 = 0;
	int i2 = 0;
	    for (int i = 0; i < mid; i++)
		    arr1[i] = arr[start + i];
	    for (int j = 0; j < end-mid2; j++)
		    arr2[j] = arr[mid2 + j];
	while(i1 < mid && i2 < end){
		if(arr1[i1] <= arr2[i2]){
			arr[start] = arr1[i1];
			i1 += 1;
		}
		else{
			arr[start] = arr2[i2];
			i2 += 1;
		}
		start += 1;
	}
	if(start == end){
		return;
	}
	else{
		if(i1 < mid){
			while(i1 < mid){
				arr[start] = arr1[i1];
			        i1 += 1;
		 		start += 1;
			}
			while(i2 < end){
				arr[start] = arr2[i2];
				i2 += 1;
				start +=1;
			}
		}
	}
	return;
}	


void Sort::merge(int* arr, int size){
	split(arr, 0,size / 2);
	split(arr, size / 2 + 1, size);
	m(arr, 0,size / 2, size / 2+1, size);
	return;
}
