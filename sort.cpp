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

