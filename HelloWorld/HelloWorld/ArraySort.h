#pragma once
#include <iostream>

void  SortNumberDecendingf(float arr[], const int length) {
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < length; j++) {
			if (arr[j] < arr[i]) {
				float c = arr[i];
				arr[i] = arr[j];
				arr[j] = c;
			}
		}
	}
}
void  SortNumberAscending (int   arr[],	const int length) {
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < length; j++) {
			if (arr[j] > arr[i]) {
				int c = arr[i];
				arr[i] = arr[j];
				arr[j] = c;
			}
		}
	}
}
void  SortNumberDecending (int   arr[],	const int length) {
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < length; j++) {
			if (arr[j] < arr[i]) {
				int c = arr[i];
				arr[i] = arr[j];
				arr[j] = c;
			}
		}
	}
}
void  SortNumberAscendingf(float arr[],	const int length) {
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < length; j++) {
			if (arr[j] > arr[i]) {
				float c = arr[i];
				arr[i] = arr[j];
				arr[j] = c;
			}
		}
	}
}
void  ArrayOutConsole	  (int   arr[],	const int LENGTH) {
	for (int i = 0; i < LENGTH; i++) {
		std::cout << arr[i] << ", ";
	}
}
void  ArrayOutConsolef	  (float arr[],	const int LENGTH) {
	for (int i = 0; i < LENGTH; i++) {
		std::cout << arr[i] << ", ";
	}
}
int   SumArray			  (int	 arr[],	const int length) {
	int arrayTotal = 0;
	for (int i = 0; i < length; i++) {
		arrayTotal += arr[i];
	}
	return arrayTotal;
}
float SumArrayf			  (float arr[],	const int length) {
	float arrayTotal = 0;
	for (int i = 0; i < length; i++) {
		arrayTotal += arr[i];
	}
	return arrayTotal;
}