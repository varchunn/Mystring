#include "DynamicArray.h"

int main() {
    DynamicArray a(5);
    DynamicArray b(3);

    DynamicArray rez = a + 10;
    rez.print();

    DynamicArray rez1 = a - 2;
    rez1.print();

    DynamicArray rez2 = a * 2;
    rez2.print();

    DynamicArray rez3 = a - b;
    rez3.print();

    DynamicArray rez4 = a + b;
    rez4.print();

    ++rez;
    rez.print();

    --rez;
    rez.print();

    return 0;
}

