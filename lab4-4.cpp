// Lab4-6.cpp - Displays the area of a triangle
// Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip> // For formatted output
using namespace std;

int main() {
    // Declare variables
    double base = 11.0;  // Base of the triangle
    double height = 13.0; // Height of the triangle
    double area = 0.0;    // Area of the triangle

    // Calculate the area
    area = (base * height) / 2.0;

    // Display the result with 2 decimal places
    cout << fixed << setprecision(2);
    cout << "The area of the triangle is: " << area << " square units." << endl;

    return 0;
}
