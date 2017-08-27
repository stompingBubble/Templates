#include <iostream>
//needed to comment a lot for this, it was a challenge :P

//variadic templates
//this one takes only one type of argument
//it will not compile if you pass two ints and a float
/*template <typename T>

void Print(std::initializer_list<T> args) {
for (const auto &x : args) {
std::cout << x << " ";
}
}*/


//following example is for passing any type of argument
//you'll need this empty function or you'll get an error, the function
//print(T, Params); is calling itself and consuming one argument every time
//the last call is for an empty function
void Print() { 
	std::cout << std::endl;
}

//template parameter pack
template <typename T, typename...Params>

//function parameter pack
//if user defined types are passed, multiple copies will be created 
//because we are passing it as a value 
//we could be passing arguments by constant reference ( const T &a, const Params&...args)
//we are passing it as rvalue- references because we use perfect forwarding
//&& = rvalue reference
void Print(T &&a, Params&&... args) { 
	//this is how you find out the size of the parameter pack 
	//std::cout << sizeof...(args) << std::endl;
	//std::cout << sizeof...(Params) << std::endl; 
	// if you just print the args like this, they will be printet togeteher
	std::cout << a;
	//print the seperator only when args is not empty
	if (sizeof...(args) != 0) { 
	//so use seperator when printed
		std::cout << ", "; 
	}
	Print(std::forward<Params>(args)...); //recursive call- could just look like Print(args...); but this is syntax for perfect forwarding
}
int main() {
	//Print({ 1, 2, 3, 4, 5 });

	Print(1, 2, 3.4, "5");
	std::cin.get();
	return 0;
}