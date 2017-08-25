#include "Templates.h"
#include <iostream>
#include <string>
#include <cstring>
#include <algorithm> 

using namespace std;


template <> const char * add<const char *>(const char *x, const char *y) {
	cout << "ERROR const char * passed" << endl;
	
	return " ";
}


template <> vector<int> add<vector<int>>(vector <int> x, vector <int> y) {
	vector <int> returnValue;

	returnValue.insert(returnValue.end(), x.begin(), x.end());
	returnValue.insert(returnValue.end(), y.begin(), y.end());
	for (int i = 0; i < returnValue.size(); i++) {
		cout << returnValue.at(i) << endl;
	}
	
	return returnValue;
}

template <> vector<int> ArraySumOne<std::vector<int>>(std::vector <int> *x, int size) { 
	vector <int>vec{0};

	cout << "ERROR vector<int> passed, pass an array" << endl;
	return vec;
}

template <> std::vector <int> MaxOne<std::vector <int>>(std::vector <int> *x, int size) {
	vector <int>vec{ 0 };

	cout << "ERROR" << endl;
	return vec;
}
