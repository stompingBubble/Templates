#pragma once
#include <vector>

template <typename T>

T add(T x, T y) {
	return x + y;
}


template <typename T2, int size>

T2 ArraySum(T2(&pArr)[size]) {
	T2 sum = 0;

	for (int i = 0; i < size; i++) {
		sum += pArr[i];
	}
	return sum;
}

template <typename T3, int size>

T3 Max(T3(&pArr)[size]) {
	T3 largestElement;

	for (int i = 0; i < size; i++) {
		if (pArr[0] < pArr[i]) {
			largestElement = pArr[i];
		}
	}
	return largestElement;
}

//explicit specialization for const char * and std::vector<int> for function add

template <> const char * add<const char*>(const char *x, const char *y);

template <> std::vector<int> add<std::vector<int>>(std::vector <int> x, std::vector <int> y);


//following is the functions from assignment one with no changes 
template <typename Te2>

Te2 ArraySumOne(Te2 *pArr, int arrSize) {
	Te2 sum = 0;

		for (int i = 0; i < arrSize; i++) {
			sum += pArr[i];
		}
		return sum;
}

template <typename Te3> 

Te3 MaxOne(Te3 *pArr, int arrSize) {
	Te3 largestElement;

	for (int i = 0; i < arrSize; i++) {
		if (pArr[0] < pArr[i]) {
			largestElement = pArr[i];
		}
	}
	return largestElement;
}

//explicit specializations for const char * and vector <int>

template <> std::vector <int> ArraySumOne<std::vector<int>>(std::vector <int> *x, int size);
template <> std::vector <int> MaxOne<std::vector <int>>(std::vector <int> *x, int size);

template <> const char* ArraySumOne <const char*>(const char *x[], int size);
template <> const char* MaxOne<const char*>(const char *x[], int size);
