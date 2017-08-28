#pragma once
template <typename T, int size>
//you dont have to specify the size but its much better than hard coding value inside class

class Stack {
	T m_Buffer[size];
	int m_Top{ -1 };

public:
	//copy constructor
	Stack() = default;
	Stack(const Stack &obj) {
		m_Top = obj.m_Top;
		for (int i = 0; i <= m_Top; i++) {
			m_Buffer[i] = obj.m_Buffer[i];
		}
	}

	void Push(const T &elem);

	void Pop();

	const T& Top() const {
		return m_Buffer[m_Top];
	}

	bool IsEmpty();

	//factory method
	static Stack Create();
};

//implementations
template <typename T, int size>

void Stack<T, size>::Push(const T &elem) {
	m_Buffer[++m_Top] = elem;
}
template <typename T, int size>
void Stack<T, size>::Pop() {
	--m_Top;
}

template <typename T, int size>

bool Stack<T, size>::IsEmpty() {
	return m_Top == -1;
}

template <typename T, int size>
Stack<T, size> Stack<T, size>::Create() {
	return Stack<T, size>();
}