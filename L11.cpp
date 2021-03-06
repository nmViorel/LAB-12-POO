#include <iostream>
#include <vector>


// AM ADAUGAT UN COMENTARIU 
// AL DOILEA COMENTARIU

using namespace std;

template<typename T>

class Stack {

public:
	
	vector <T> v;
	
	int size() const;
	bool isEmpty() const;
	const T& top() const
	{
		if (isEmpty()) throw "Stiva goala\n";
		return v.back();
	}
	
	void push(const T& ob);
	void pop();
	
};

template<typename T> bool Stack<T>::isEmpty() const 
{
	return (v.empty());
}

template<typename T> void Stack<T>::push(const T& ob) 
{
	v.push_back(ob);
}

template<typename T> void Stack<T>::pop() 
{
	if (isEmpty())
		throw "Stiva goala\n";
		
	v.pop_back();
}

int main() {
	Stack <int> st;
	
	for (int i = 1; i <= 5; i++)
		st.push(i);
		
		while (!st.isEmpty()) 
		{
			cout << st.top() << "\n";
			st.pop();
		}
	
	cout << "Mesaj de test\n";
	return 0;
}
