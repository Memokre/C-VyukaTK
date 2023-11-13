#include <iostream>

class MyClass {
private:
    int a;
    int b;
    char c;
    float value;

public:
    MyClass(int a, int b, char c, float value) {
        this->a = a;
        this->b = b;
        this->c = c;
        this->value = value;
    }

    void printSum() {
        std::cout << "String a (" << a << ") + b (" << b << ") = " << a + b << std::endl;
    }

    void printCharA() {
        std::cout << "Char a: " << c << std::endl;
    }

    void printPiValue() {
        std::cout << "Float equal to pi value: " << value << std::endl;
    }
};

int main() {
    MyClass obj(2, 3, 'a', 3.14159);
    obj.printSum();
    obj.printCharA();
    obj.printPiValue();

    return 0;
}
