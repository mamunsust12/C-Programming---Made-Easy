#include <iostream>

using namespace std;

int main() {
    float temp;

    cout << "Enter the temperature: ";
    cin >> temp;

    if (temp < 0) {
        cout << "ICE" << endl;
    } else if (temp >= 0 && temp <= 100) {
        cout << "WATER" << endl;
    } else {
        cout << "STEAM" << endl;
    }

    return 0;
}
