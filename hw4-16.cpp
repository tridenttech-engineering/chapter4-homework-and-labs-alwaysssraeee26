// Advanced16.cpp
// Created/revised by [Your Name] on [Current Date]

#include <iostream>
#include <iomanip>

int main() {
    // Declare constants and variables
    const double increase = 1.05;
    double store1 = 0.0;
    double store2 = 0.0;
    int store1Int = 0;
    int store2Int = 0;
    int totalInt = 0;

    // Prompt user for input
    std::cout << "Store 1 sales: ";
    std::cin >> store1;
    std::cout << "Store 2 sales: ";
    std::cin >> store2;

    // Calculate increased sales and round to nearest cent
    store1Int = static_cast<int>(store1 * increase * 100 + 0.5);
    store2Int = static_cast<int>(store2 * increase * 100 + 0.5);

    // Calculate total sales in cents
    totalInt = store1Int + store2Int;

    // Display results with two decimal places
    std::cout << std::fixed << std::setprecision(2);
    std::cout << store1Int / 100.0 << " ---> Store 1" << std::endl;
    std::cout << store2Int / 100.0 << " ---> Store 2" << std::endl;
    std::cout << "-----------------" << std::endl;
    std::cout << totalInt / 100.0 << " ---> Total" << std::endl;

    return 0;
}
