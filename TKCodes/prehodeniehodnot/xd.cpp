#include <iostream>
using namespace std;

int main() {
    int a = 1;
    int b = 0;
    cout << a<< "   " << b;
   
    int value;

    value = a;  //1
    a = b;   // a = 00
    b = value;


    cout << " \n";
    cout << a << "   " << b;

    return 0;
}
