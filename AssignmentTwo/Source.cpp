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
	vector <int> hej;

	hej.push_back(1);

	int(&ref)[5] = arrOfInts;
	double(&ref1)[4] = arrOfDoubles;

	double sum, maxSum;

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