#pragma once
#include <iostream>
#include <string>
#include <time.h>
#include <cstdlib>
using namespace std;

template <typename T>
T Max(T A, T B)
{
	return A > B ? A : B;
}





template <typename T>
void smoothArray(T arr[], const int size) {
	for (int k = 0; k < size - 1; k++) {
		arr[k] = (float)(arr[k] + arr[k + 1]) / 2;
	}
}

template <typename T>
double averageMoreM(T arr[], const int size, T m) {
	T sum = 0;
	int avg = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] > m) {
			sum += arr[i];
			avg++;
		}
	}
	return (float)sum / avg;
}





/*мабуть найкращий код що я зміг тільки придумати*/

template <typename T>
string rootFind(T a, T b) {
	T x = -(b / a);
	string n(to_string(x));
	return n;
}

#include <cmath>

template <typename T>
string rootFind(T a, T b, T c) {
	
	string answ("");
	T D = (b * b - (4 * (a * c)));
	T x = ((-1 * b) + sqrt(D)) / (2 * a);
	answ += to_string(x); answ += " | ";
	x = ( (-1*b) - sqrt(D)) / (2 * a);
	answ += to_string(x);
	return answ;
}