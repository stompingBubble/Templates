#include "Templates.h"
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

template <> const char * add<const char *>(const char *x, const char *y) {
	cout << "const char * passed" << endl;
	return " ";
}


template <> vector<int> add<vector<int>>(vector <int> x, vector <int> y) {
	vector <int> addedVectors;

	x.insert(x.end(), y.begin(), y.end());
	return addedVectors;
}

/*template <> const char * ArraySum<const char*>(const char *x) {
	cout << "const char* passed, pass an array";
	return " ";
}*/
