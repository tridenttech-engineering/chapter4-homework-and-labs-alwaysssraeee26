// Lab4-4.cpp - Displays the volume of a cylinder
// Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip> // For formatted output (optional)
using namespace std;

// Define constants
const double PI = 3.141592653589793;

int main() {
    // Declare variables
    double height = 0.0;
    double radius = 0.0;
    double volume = 0.0;

    // Prompt user for input
    cout << "Enter the height of the cylinder: ";
    cin >> height;
    cout << "Enter the radius of the cylinder: ";
    cin >> radius;

    // Calculate volume
    volume = PI * radius * radius * height;

    // Display the result with 2 decimal places
    cout << fixed << setprecision(2);
    cout << "The volume of the cylinder is: " << volume << " cubic units." << endl;

    return 0;
}
