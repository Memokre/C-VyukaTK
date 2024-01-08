#include <iostream>
using namespace std;

unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num;
    cout << "Zadaj cislo:  ";
    cin >> num;

    if (num < 0) {
        cout << "Faktorial nejde pre zaporne cislo lol" << endl;
    } else {
        unsigned long long fact = factorial(num);
        cout << "Factorial of " << num << " is: " << fact << endl;
    }

    return 0;
}
