#include <iostream>
#include <ctime>
using namespace std;

template <typename T>
T* init_array(size_t size)
{
    T* arr = new T[size];
    for (size_t i = 0; i < size; i++)
    {
        arr[i] = T(rand() % 22);
    }
    return arr;
}

template <typename T>
void print_array(T* arr, T* arr2, int size = -1, int size2 = -1)
{
    if (size == -1)
    {
        size = _msize(arr) / sizeof * arr;
    }

    if (size2 == -1)
    {
        size2 = _msize(arr2) / sizeof * arr2;
    }
    int all = 0;

    for (size_t i = 0; i < size; i++)
    {
        bool found = false;
        for (int j = 0; j < size2; j++)
        {
            if (arr[i] == arr2[j])
            {
                found = true;
                all += 1;
                break;

            }
        }
        if (!found)
        {
            false;

            all = 0;
        }
    }
    if (all == size)
    {
        cout << "------";
        cout << "true";
        cout << "------";
    }
    else
    {
        cout << "------";
        cout << "false";
        cout << "------";
    }
    cout << endl;
}

template <typename T>
void print_array_for_one_massive(T* arr, int size = -1)
{
    if (size == -1)
    {
        size = _msize(arr) / sizeof * arr;
    }
    for (size_t i = 0; i < size; i++)
    {
        cout << *(arr + i) << "  ";
    }
    cout << endl;
}

int main()
{
    srand(time(0));

    cout << "enter size for B array - ";
    int size;
    cin >> size;
    int* arr_i = init_array<int>(size);

    cout << "enter size for A array - ";
    int size2;
    cin >> size2;
    cout << "-----------------------" << endl;
    int* arr_i2 = init_array<int>(size2);
    cout << "B array - ";
    print_array_for_one_massive<int>(arr_i);
    cout << endl;
    cout << "A array - ";
    print_array_for_one_massive<int>(arr_i2);
    cout << "-----------------------" << endl;
    cout << "result - ";

    print_array<int>(arr_i, arr_i2);

    delete[] arr_i;
    delete[] arr_i2;

    return 0;
}