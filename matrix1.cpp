#include <iostream>
using namespace std;
void print2d(int *arr, int row, int col);

int main() 
{
    int row;
    int col;
    int arr[100][100];
    int i, j;
    cout << "Enter Row num\n";
    cin >> row;
    cout << "Enter Col num\n";
    cin >> col;
    cout << "Enter Values to matrix\n";
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            cout << i << ' ' << j << ':';
            cin >> arr[i][j];
        }
    }
    cout << "The matrix is \n";
    print2d(arr, row, col);
}

void print2d(int *arr, int row, int col) {
    int i, j;
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}


