#include <iostream>
#include <cmath>

int main() {
    int choice;
    double angle, result;

    std::cout << "Trigonometric Operation Calculator\n";
    std::cout << "---------------------------------\n";
    std::cout << "1. Sine\n";
    std::cout << "2. Cosine\n";
    std::cout << "3. Tangent\n";
    std::cout << "Enter your choice (1/2/3): ";
    std::cin >> choice;

    if (choice < 1 || choice > 3) {
        std::cout << "Invalid choice. Exiting.\n";
        return 1;
    }

    std::cout << "Enter the angle (in degrees): ";
    std::cin >> angle;

    // Convert angle to radians as C++ math functions expect angles in radians
    double angleRadians = angle * M_PI / 180.0;

    switch (choice) {
        case 1:
            result = sin(angleRadians);
            std::cout << "Sine(" << angle << ") = " << result << '\n';
            break;
        case 2:
            result = cos(angleRadians);
            std::cout << "Cosine(" << angle << ") = " << result << '\n';
            break;
        case 3:
            result = tan(angleRadians);
            std::cout << "Tangent(" << angle << ") = " << result << '\n';
            break;
    }

    return 0;
}
