// 1. modify the function templates created in assignment ! to accept array by reference 

// 2. create specialization of the function templates created in assignment 1.
//specialized for const char* & std::vector<int>

//3. define the specialized functions in a .h-file and include it in multiple sourse files, observe what happens. 

#include <String>
#include <iostream>
#include "Templates.h"
using namespace std;

void Test();

int main() {
	Test();

	return 0;
}

void Test() { //testing all the functions
	vector <int> hej{ 2, 3, 4, 5, 6 };
	vector <int> hej2{ 2,5,7,9,65 };
	double a = 1.2, b = 1.0;
	double sum, maxSum;
	vector <int> returnedElement, combinedVector;
	
	const char *test = "TEXT";

	ArraySumOne(&test, 10); //test passing const char 
	cout << endl;
	cin.get();

	sum = add(a, b); //passing doubles
	cout << sum << endl;
	cin.get();

	returnedElement = MaxOne(&hej2, 5); //passing int vector
	cout << returnedElement.at(0) << endl;
	cin.get();

	ArraySumOne(&hej, 5); //passing int vector
	cin.get();

	combinedVector = add(hej, hej2); //passing two int vectors
	for (int i = 0; i < combinedVector.size(); i++) {
		cout << combinedVector.at(i) << endl;
	}
	cin.get();

	int arrOfInts[]{ 0, 4, 5, -3, 7 };
	double arrOfDoubles[]{ 0.23, 4.5, -3.2, 7.9 };

	int(&ref)[5] = arrOfInts;
	double(&ref1)[4] = arrOfDoubles;

	sum = ArraySum(ref); //passing ints
	cout << sum;
	cin.get();

	sum = ArraySum(ref1); //doubles
	cout << sum;
	cin.get();

	maxSum = Max(ref);
	cout << maxSum;
	cin.get();

	maxSum = Max(ref1);
	cout << maxSum;
	cin.get();
}