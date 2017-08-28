#include <iostream>
#include <vector>
//explicit specialization of class templates
template <typename T>

class PrettyPrinter {
	T *m_pData;
public: 
	PrettyPrinter(T *data) :m_pData(data) {

	}

	void Print() {
		std::cout << "**{" << *m_pData << "}**" << std::endl;
	}

	T * GetData() {
		return m_pData;
	}
};

//explicit specialization for char* 
template <>

class PrettyPrinter<char*> {
	char *m_pData;
public:
	PrettyPrinter(char *data) :m_pData(data) {

	}

	void Print() {
		std::cout << "**{" << m_pData << "}**" << std::endl;
	}

	char * GetData() {
		return m_pData;
	}
};

//explicit specialization for vector<int>
//the only thing you have to specialize is the print function 
template <>

void PrettyPrinter<std::vector<int>>::Print() {
	std::cout << "**{";
	for (const auto &x : *m_pData) {
		std::cout << x;
	}
	std::cout << "}**" << std::endl;
}

int main() {
	int data = 5;
	float f = 8.2f;
	char *p{ "Hello world" };

	PrettyPrinter<int> p1(&data);
	p1.Print();
	PrettyPrinter<float> p2(&f);
	p2.Print();
	PrettyPrinter<char*> p3(p);
	p3.Print();

	std::vector<int> v{ 1,2,3,4,5 };
	PrettyPrinter<std::vector<int>> pv(&v);
	pv.Print();

	char *pData = p3.GetData();
	std::cin.get();

	return 0;
}