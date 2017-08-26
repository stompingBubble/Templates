#include <iostream>
//variadic templates

/*template <typename T>

void Print(std::initializer_list<T> args) {
	for (const auto &x : args) {
		std::cout << x << " ";
	}
}*/
void Print() {
	std::cout << "second function!";
}
//template parameter pack
template <typename T, typename...Params>

//function parameter pack
void Print(T a, Params... args) {
	//std::cout << sizeof...(args) << std::endl;
	//std::cout << sizeof...(Params) << std::endl;
	//std::cout << a;
	/*if (sizeof...(args) != 0) {
		std::cout << ", ";
	}*/
	Print(args...);
}
int main() {
	//Print({ 1, 2, 3, 4, 5 });

	Print(1, 2, 3.4, "5");
	std::cin.get();
	return 0;
}