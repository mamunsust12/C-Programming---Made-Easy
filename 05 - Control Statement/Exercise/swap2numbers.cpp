#include <iostream>
#include <algorithm> // Include the algorithm header for std::swap

using namespace std;

int main() {
    double num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Before swapping: ";
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

    // Use the std::swap function to swap the numbers
    swap(num1, num2);

    cout << "After swapping: ";
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}
