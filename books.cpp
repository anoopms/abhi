#include <iostream>
using namespace std;

struct books {
    char title[100];
    char author[100];
    int pages;
    float prize;
    char date[100];
};

int main() {
    struct books books[100];
    int length, i;
    
    cout << "Enter total number of books: ";
    cin >> length;
    for (i = 0; i < length; i++) {
        cout << "Enter Book Name: ";
        cin >> books[i].title;

        cout << "Enter Author: ";
        cin >> books[i].author;

        cout << "Enter Page number: ";
        cin >> books[i].pages;

        cout << "Enter Prize: ";
        cin >> books[i].prize;
        
        cout << "Enter Publishing date: ";
        cin >> books[i].date;
    }
    
    cout << "TITLE" << '\t';
    cout << "AUTHOR" << '\t';
    cout << "PAGES" << '\t';
    cout << "PRIZE" << '\t';
    cout << "DATE" << '\t' << endl;
    
    for (i = 0; i < length; i++) {
        cout << books[i].title << '\t';
        cout << books[i].author << '\t';
        cout << books[i].pages << '\t';
        cout << books[i].prize << '\t';
        cout << books[i].date << '\t' << endl;
    }
}
