#include <iostream>
using namespace std;

class Cube {
public:
    friend void displayCube(int n);
};

void displayCube(int n) {
    cout << "Cubes of numbers up to " << n << ":" << endl;
    for (int i = 1; i <= n; ++i) {
        cout << "Cube of " << i << " is: " << i * i * i << endl;
    }
}

int main() {
    int num;
    cout << "Enter the integer up to which you want to display cubes: ";
    cin >> num;
    displayCube(num);
    return 0;
}