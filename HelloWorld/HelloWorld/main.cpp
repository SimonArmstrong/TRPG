#include <iostream>
#include <string>
#include "Vector2.h"
#include "Vector3.h"
#include "ArraySort.h"
#include <random>

#define LOG(x) cout << x << endl;

using namespace std;

const int LENGTH = 7;

int nArray[] = {5, 2, 0, -3, 9, 18, -8};
float fArray[] = {0.4f, 0.2f, 9.1f, -8.4f};

float Abs(float input) 
{
	input = input < 0 ? input * -1: input * 1;
	return input;
}
float Clamp(float val, float start, float end) {
	val > end ? val = end : val = val;
	val < start ? val = start : val = val;
	return val;
}
float Smaller(float x, float y) {
	return x < y ? x : y;
}

int main() 
{
	system("PAUSE");		
	return 0;
}