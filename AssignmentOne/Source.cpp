//convert the following functions into templates:
//int Add(int x,int y) ; //Return the sum of two elements
//int ArraySum(int *pArr, int arrSize); //Returns the sum of array elements
//int Max(int *pArr, int arrSize); //Return the largest element in the array

#include <String>
#include <iostream>
using namespace std;

template <typename T>

T add(T x, T y) {
	return x + y;
}

template <typename T2>

T2 ArraySum(T2 *pArr, int arrSize) {
	T2 sum = 0;

		for (int i = 0; i < arrSize; i++) {
			sum += pArr[i];
		}
		return sum;
}

template <typename T3> 

T3 Max(T3 *pArr, int arrSize) {
	T3 largestElement;

	for (int i = 0; i < arrSize; i++) {
		if (pArr[0] < pArr[i]) {
			largestElement = pArr[i];
		}
	}
	return largestElement;
}

void TestArrFunctions();

int main() {
	TestArrFunctions();
	
	return 0;
}

void TestArrFunctions() {
	int arrOfInts[5] = { 0, 4, 5, -3, 7 };
	double arrOfDoubles[4] = { 0.23, 4.5, -3.2, 7.9 };
	double sum, maxSum;

	sum = ArraySum(arrOfInts, 5);
	cout << sum;
	cin.get();

	sum = ArraySum(arrOfDoubles, 4);
	cout << sum;
	cin.get();

	maxSum = Max(arrOfInts, 5);
	cout << maxSum;
	cin.get();

	maxSum = Max(arrOfDoubles, 4);
	cout << maxSum;
	cin.get();
}