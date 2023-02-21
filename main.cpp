#include <iostream>
#include <ctime>
using namespace std;

template<typename T>
T* cr_array(int size)
{
	int counter_minus = 0;
	int counter_plus = 0;
	int counter_0 = 0;
	T* array = new T[size];
	for (size_t i = 0; i < size; i++)
	{
		array[i] = T(100 - rand() % 200);
		cout << array[i] << '\t';
		if (array[i] < 0)
		{
			counter_minus++;
		}
		else if (array[i] > 0)
		{
			counter_plus++;
		}
		else
		{
			counter_0++;
		}
	}
	cout << "\nnumbers > 0 - [" << counter_plus << "]";
	cout << "\nnumbers = 0 - [" << counter_0 << "]";
	cout << "\nnumbers < 0 - [" << counter_minus << "]";
	return 0;
}

int main() 
{
	srand(time(0));
	int size;
	cout << "enter size - ";
	cin >> size;
	int* array = cr_array<int>(size);
}