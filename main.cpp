#include <iostream>
#include <ctime>
using namespace std;

template<typename T>
T* create_array(int size)
{
    T* array = new T[size];
    for (size_t i = 0; i < size; i++)
    {
        array[i] = T(rand() % 50);
        cout << array[i] << '\t';
    }
    int oper;
    cout << "\n\tEnter [ 1 | 2 ] ->";
    cin >> oper;
    switch (oper)
    {
    case 1: {
        for (size_t i = 0; i < size; i++)
        {
            if (array[i] % 2 != 0)
            {
                for (size_t j = i; j < size - 1; j++)
                {
                    array[j] = array[j + 1];
                }
                i--;
                size--;
                cout << array[i] << '\t';
            }
        }
    }break;
    case 2:
    {
        for (size_t i = 0; i < size; i++)
        {
            if (array[i] % 2 == 0)
            {
                for (size_t j = i; j < size - 1; j++)
                {
                    array[j] = array[j + 1];
                }
                i--;
                size--;
                cout << array[i] << '\t';
            }
        }
    }break;
    default:
        break;
    }
    return 0;
}

int main()
{
    srand(time(0));
    int size;
    cout << "enter size - ";
    cin >> size;
    int* arr = create_array<int>(size);
}