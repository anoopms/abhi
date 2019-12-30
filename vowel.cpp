#include <iostream>
#include <string.h>
using namespace std;


int main() {
    char ch;
    cout << "Enter A charecter \n";
    cin >> ch;
    
    switch (ch) {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << "Vowel";
            break;
        default:
            cout << "Not a vowel";
        
    }
    cout << endl;
    return 0;
}

