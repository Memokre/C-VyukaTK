#include <iostream>
using namespace std;

int main() {
    int a = 1;
    int b = 0;
    cout << a << "   " << b;

    int* aPtr = &a;
    int* bPtr = &b;

    int temp = *aPtr; 
    *aPtr = *bPtr;   
    *bPtr = temp;     

    cout << " \n";
    cout << a << "   " << b;

    return 0;
}
