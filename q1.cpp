#include <iostream>

int main ()
{
    int rows = 0;
    int number = 1;

    std::cout << "Enter the number of rows: ";
    std::cin >> rows;

    for (int i = 1; i<= rows; ++i) {
        for (int j = 1; j <= i; ++j) {
            std::cout << number <<" ";
            ++number;
        }
        std::cout << std::endl;
    }
return 0;
}