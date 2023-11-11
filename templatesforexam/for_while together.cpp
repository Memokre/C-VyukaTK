#include <iostream>

int main() {
    int count = 0;

    while (count < 3) {
        std::cout << "Outer loop count: " << count << std::endl;

        for (int i = 0; i < 2; i++) {
            std::cout << "Inner loop count: " << i << std::endl;
        }

        count++;
    }

    return 0;
}
