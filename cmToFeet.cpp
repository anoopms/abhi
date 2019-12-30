#include <iostream>
#include <string.h>
using namespace std;

void convertToFeetInches(int cm);

int main() {
    int height;
    cout << "Enter Height in CM: ";
    cin >> height;
    convertToFeetInches(height);
}

void convertToFeetInches(int cm) {
    float inches = cm/2.54;
    int feet = inches/12;
    float remaining = inches - (feet * 12);
    cout << feet << " " << remaining << endl;
}
