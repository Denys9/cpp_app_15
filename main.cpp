#include <iostream>
#include <ctime>
using namespace std;

int* DelNeg(int* array, int n, int& k)
{
    int i, j, * r;
    k = 0;
    for (i = 0; i < n; i++)
    {
        if (array[i] >= 0)
        {
            k++;
        }
    }
    r = new int[k];
    j = 0;
    for (i = 0; i < n; i++)
    {
        if (array[i] >= 0)
        {
            r[j++] = array[i];
        }
    }
    delete[] array;
    return r;
}

int main()
{
    srand(time(0));
    int i, n, * r;
    int size;
    cout << "enter size - ";
    cin >> size;
    int* array = new int[size];
    cout << "\n\noriginal array\n";
    for (size_t i = 0; i < size; i++)
    {
        array[i] = 100 - rand() % 200;
        cout << array[i] << '\t';
    }

    cout << "\n\nremastered array\n";
    r = DelNeg(array, size, n);

    for (i = 0; i < n; i++)
    {
        cout << r[i] << "\t";
    }
    cout << endl;
    delete[] r;
}