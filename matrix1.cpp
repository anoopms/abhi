#include <iostream>
using namespace std;
void print2d(int arr[100][100], int row, int col);
int smallest(int arr[100][100], int row, int col);
int largest(int arr[100][100], int row, int col);

int main() 
{
    int row;
    int col;
    int arr[100][100];
    int oneDArr[100];
    int i, j;
    int k = 0;
    int small, large;
    
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
    
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            oneDArr[k] = arr[i][j];
            k = k + 1;
        }
    }
    
    cout << "1d arr is \n";
    for (i = 0; i < k; i++) {
        cout << oneDArr[i] << endl;
    }
    
    small = smallest(arr, row, col);
    large = largest(arr, row, col);
    cout << "Smallest: " << small << endl;
    cout << "Largest: " << large << endl;
}

int smallest(int arr[100][100], int row, int col) {
    int small = arr[0][0];
    int i, j;
    
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            if(arr[i][j] < small) {
                small = arr[i][j];
            }
        }
    }
    return small;
}

int largest(int arr[100][100], int row, int col) {
    int large = arr[0][0];
    int i, j;
    
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            if(arr[i][j] > large) {
                large = arr[i][j];
            }
        }
    }
    return large;
}

void print2d(int arr[100][100], int row, int col) {
    int i, j;
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            int val = arr[i][j];
            if(val < 0 ) {
                val = 0;
            }
            cout << val << " ";
        }
        cout << endl;
    }
}


