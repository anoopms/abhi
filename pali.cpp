#include <iostream>
#include <string.h>
using namespace std;

int checkPalindrom(char *in) ;

int main() {
    char input[100];
    int res;
    
    cout << "Enter string: ";
    cin >> input;
    res = checkPalindrom(input);
    if(res == 1) {
        cout << "Palindrom \n";
    } else {
        cout << "Not Palindrom \n";
    }
}

int checkPalindrom(char *in) {
    int length, i;
    length = strlen(in);
    for (i = 0; i < length / 2; i++) {
        if(in[i] != in[length - 1 - i]) {
            return 0;
        }
    }
    return 1;
}
