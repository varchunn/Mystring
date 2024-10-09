#pragma once
#include <iostream>

class DynamicArray
{
    int* arr;
    int size;

public:
    DynamicArray(int s = 0);
    DynamicArray(const DynamicArray& other);
    ~DynamicArray();

    DynamicArray operator+(int n);
    DynamicArray operator-(int n);
    DynamicArray operator*(int n);
    DynamicArray operator-(const DynamicArray& other);
    DynamicArray operator+(const DynamicArray& other);

    DynamicArray& operator++();
    DynamicArray& operator--();

    void print() const;
};

