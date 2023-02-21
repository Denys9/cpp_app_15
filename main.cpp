#include <iostream>
#include <ctime>
using namespace std;

void remastered(int*& array, int& size, int del_size, int start)
{
	int* temp = new int[size];
	for (size_t i = 0; i < size; i++)
	{
		temp[i] = array[i];
	}
	int new_size = size - del_size;
	int* rem_array = new int[new_size];

	for (size_t i = 0; i < static_cast<unsigned long long>(start) - 1; i++)
	{
		rem_array[i] = temp[i];
	}


	for (size_t i = static_cast<size_t>(start) + del_size; i < size; i++)
	{
		rem_array[i - del_size] = temp[i];
	}

	size = new_size;
	delete[] array;
	array = rem_array;
	delete[] temp;

	cout << "\n\nremastered\n";
	for (size_t i = 0; i < size; i++)
	{
		cout << array[i] << "\t";
	}
}

int main() 
{
	srand(time(0));
	int size;
	cout << "enter size - ";
	cin >> size;
	int* array = new int[size];
	for (size_t i = 0; i < size; i++)
	{
		array[i] = rand() % 111;
		cout << array[i] << "\t";
	}
	cout << "\nenter a start - ";
	int start;
	cin >> start;
	cout << "enter a size - ";
	int del_size;
	cin >> del_size;

	remastered(array, size, del_size, start);
	delete[] array;
}