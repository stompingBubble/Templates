#include <iostream>

template <typename T> 

T Max(T x, T y) { 
	std::cout << typeid(T).name() << std::endl; 
	return x > y ? x : y;
}

//Explicit Instantiation
template char Max(char x, char y);


//Explicit Specialization 

template <> const char * Max<const char*>(const char *x, const char *y) {
	std::cout << "Max<const char*>()" << std::endl;
	return strcmp(x, y) > 0 ? x : y; //if x is greater than y return x else y 
}

template <int size>
void Print() {
	char buffer[size];
	std::cout << size << std::endl;
}
//pass array without size specified 
template <typename T4, int size> 

T4 Sum(T4(&pArr)[size]) {
	T4 sum = 0;

	for (int i = 0; i < size; i++) {
		sum += pArr[i];
	}
	return sum;
}

int main() {
	Max(static_cast<float>(3), 5.5f); //ways of not getting error when two types are passed
	Max<double>(3, 6.2);
	int(*ptf)/*pointer to function*/(int, int) = Max;
	std::cin.get();

	const char *b{ "B" }; //this leads us to making a explicit specialization, for Max-function does not work for strings 
	const char *a{ "A" };

	auto s = Max(a, b);
	std::cout << s << std::endl;
	std::cin.get();

	int arr[]{ 3,1,4,2,3 }; //passing array without size specified
	int(&ref)[5] = arr;

	int sum = Sum(arr);
	std::cout << sum << std::endl;
	std::cin.get();
	return 0;
}

