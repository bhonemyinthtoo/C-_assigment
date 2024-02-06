#include <iostream>
#include <cmath>

// Function to calculate the area of a triangle using call by value
double calculateArea(double base, double height) {
    return 0.5 * base * height;
}

// Function to calculate the area of a triangle using call by reference
void calculateArea(double base, double height, double &result) {
    result = 0.5 * base * height;
}

int main() {
    double base, height;

    std::cout << "Enter the base of the triangle: ";
    std::cin >> base;

    std::cout << "Enter the height of the triangle: ";
    std::cin >> height;

    // Using call by value
    double areaByValue = calculateArea(base, height);
    std::cout << "Area of the triangle (call by value): " << areaByValue << std::endl;

    // Using call by reference
    double areaByReference;
    calculateArea(base, height, areaByReference);
    std::cout << "Area of the triangle (call by reference): " << areaByReference << std::endl;

    return 0;
}