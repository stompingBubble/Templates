#include <iostream>
#include "TemplateClass.h"

int main() {
	Stack<int, 10> s = Stack<int, 10>::Create();
	Stack<float, 10> f;


	s.Push(3);
	s.Push(1);
	s.Push(6);
	s.Push(9);

	auto s2(s); //kopied stack

	while (!s.IsEmpty()) { 
		std::cout << s.Top() << " ";
		s.Pop();
	}
	std::cin.get();
	return 0;
}