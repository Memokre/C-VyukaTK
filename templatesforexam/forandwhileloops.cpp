#include <iostream>

int main() {
    int count = 0;

    while (count < 5) {
        std::cout << "Count: " << count << std::endl;
        count++;
    }
    for (int i = 0; i < 5; i++) {
        std::cout << "Count: " << i << std::endl;
    }

    return 0;

    
}
