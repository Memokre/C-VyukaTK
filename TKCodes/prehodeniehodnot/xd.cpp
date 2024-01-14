#include <iostream>
using namespace std;

void swaperoo(int* aPtr, int* bPtr) {
    int temp = *aPtr;
    *aPtr = *bPtr;
    *bPtr = temp;
}

int main() {
    int a, b;


    cout << "Zadaj A: ";
    cin >> a;
    cout << "Tiez B: ";
    cin >> b;

    cout << "Hodnoty a a b su: " << a << "   " << b << endl;

    int* aPtr = &a;
    int* bPtr = &b;

  
    swaperoo(aPtr, bPtr);

    cout << "Po swape je a a b: " << a << "   " << b;

    return 0;
}
