#include <iostream>

void drawCrown(int height) {
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < height - i; ++j) {
            std::cout << " ";
        }
        for (int k = 0; k <= i; k++) {
            std::cout << " *";
        }
        std::cout << std::endl;
    }
}

void drawKmen(int height, int width) {
   
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) 
            std::cout << " ";
        std::cout << "##" << std::endl;
        
    }
    
}

int main()
{
    int crown, trunk;

    std::cout << "Treetop height: ";
    std::cin >> crown;

    std::cout << "Trunk height: ";
    std::cin >> trunk;

    drawCrown(crown);
    drawKmen(trunk, crown);

    return 0;
}