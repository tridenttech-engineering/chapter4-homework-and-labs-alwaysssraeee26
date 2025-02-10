#include <iostream>
#include <iomanip> // For setting decimal precision

int main() {
    // Declare variables for the number of pizzas sold
    int smallPizzas = 0;
    int mediumPizzas = 0;
    int largePizzas = 0;
    int familyPizzas = 0;

    // Prompt user for input
    std::cout << "Enter the number of small pizzas sold: ";
    std::cin >> smallPizzas;
    std::cout << "Enter the number of medium pizzas sold: ";
    std::cin >> mediumPizzas;
    std::cout << "Enter the number of large pizzas sold: ";
    std::cin >> largePizzas;
    std::cout << "Enter the number of family pizzas sold: ";
    std::cin >> familyPizzas;

    // Calculate the total number of pizzas sold
    int totalPizzas = smallPizzas + mediumPizzas + largePizzas + familyPizzas;

    // Check if totalPizzas is zero to avoid division by zero
    if (totalPizzas == 0) {
        std::cout << "No pizzas were sold." << std::endl;
        return 0;
    }

    // Calculate the percentage contribution of each pizza size
    double smallPercentage = (static_cast<double>(smallPizzas) / totalPizzas) * 100;
    double mediumPercentage = (static_cast<double>(mediumPizzas) / totalPizzas) * 100;
    double largePercentage = (static_cast<double>(largePizzas) / totalPizzas) * 100;
    double familyPercentage = (static_cast<double>(familyPizzas) / totalPizzas) * 100;

    // Display the results
    std::cout << "\nTotal pizzas sold: " << totalPizzas << std::endl;
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "Small pizzas: " << smallPercentage << "%" << std::endl;
    std::cout << "Medium pizzas: " << mediumPercentage << "%" << std::endl;
    std::cout << "Large pizzas: " << largePercentage << "%" << std::endl;
    std::cout << "Family pizzas: " << familyPercentage << "%" << std::endl;

    return 0;
}
