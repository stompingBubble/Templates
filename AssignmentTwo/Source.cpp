// 1. modify the function templates created in assignment ! to accept array by reference 

// 2. create specialization of the function templates created in assignment 1.
//specialized for const char* & std::vector<int>

//3. defina the specialized functions in a .h-file and include it in multiple sourse files, observe what happens. 

#include <String>
#include <iostream>
#include "Templates.h"
using namespace std;

void TestArrFunctions();

int main() {
	TestArrFunctions();

	return 0;
}

void TestArrFunctions() {
	int arrOfInts[]{ 0, 4, 5, -3, 7 };
	double arrOfDoubles[]{ 0.23, 4.5, -3.2, 7.9 };
	vector <int> hej{ 2, 3, 4, 5, 6 };
	vector <int> hej2{ 2,5,7,9,65 };
	vector <int> addedVectors;
	double a = 1.2;
	double b = 1.0;
	double sum, maxSum;
	sum = add(a, b);
	cout << sum;

	ArraySumOne(&hej, 5);

	add(hej, hej2);

	int(&ref)[5] = arrOfInts;
	double(&ref1)[4] = arrOfDoubles;

	sum = ArraySum(ref);
	cout << sum;
	cin.get();

	sum = ArraySum(ref1);
	cout << sum;
	cin.get();

	maxSum = Max(ref);
	cout << maxSum;
	cin.get();

	maxSum = Max(ref1);
	cout << maxSum;
	cin.get();
}