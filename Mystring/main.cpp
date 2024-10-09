#include "DynamicArray.h"
using namespace std;

DynamicArray::DynamicArray(int s)
{
    size = s;
    if (size > 0)
    {
        arr = new int[size];
        for (int i = 0; i < size; i++)
        {
            arr[i] = 0;
        }
    }
    else
    {
        arr = nullptr;
    }
}

DynamicArray::DynamicArray(const DynamicArray& other)
{
    size = other.size;
    arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = other.arr[i];
    }
}

DynamicArray::~DynamicArray()
{
    delete[] arr;
}
DynamicArray DynamicArray::operator+(int n)
{
    DynamicArray temp(size + n);
    for (int i = 0; i < size; i++)
    {
        temp.arr[i] = arr[i];
    }
    return temp;
}

DynamicArray DynamicArray::operator-(int n)
{
    if (size > n)
    {
        DynamicArray temp(size - n);
        for (int i = 0; i < temp.size; i++)
        {
            temp.arr[i] = arr[i];
        }
        return temp;
    }
    return *this;
}

DynamicArray DynamicArray::operator*(int n)
{
    DynamicArray temp(size);
    for (int i = 0; i < size; i++)
    {
        temp.arr[i] = arr[i] * n;
    }
    return temp;
}

DynamicArray DynamicArray::operator-(const DynamicArray& other)
{
    DynamicArray temp(size);
    for (int i = 0; i < size; i++)
    {
        if (i < other.size)
        {
            temp.arr[i] = arr[i] - other.arr[i];
        }
        else
        {
            temp.arr[i] = arr[i];
        }
    }
    return temp;
}

DynamicArray DynamicArray::operator+(const DynamicArray& other)
{
    DynamicArray temp(size + other.size);
    for (int i = 0; i < size; i++)
    {
        temp.arr[i] = arr[i];
    }
    for (int i = 0; i < other.size; i++)
    {
        temp.arr[size + i] = other.arr[i];
    }
    return temp;
}

DynamicArray& DynamicArray::operator++()
{
    DynamicArray temp(size + 1);
    for (int i = 0; i < size; i++)
    {
        temp.arr[i] = arr[i];
    }
    *this = temp;
    return *this;
}

DynamicArray& DynamicArray::operator--()
{
    if (size > 1)
    {
        DynamicArray temp(size - 1);
        for (int i = 0; i < temp.size; i++)
        {
            temp.arr[i] = arr[i];
        }
        *this = temp;
    }
    return *this;
}

void DynamicArray::print() const
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

