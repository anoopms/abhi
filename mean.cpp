#include <iostream>
#include <math.h>
using namespace std;

int findSum(int *a, int l);
int findProduct(int *a, int l);
float findMean(int *a, int l);
float findSD(int *a, int l);

int main() {
    
    int nums[100];
    int length, i;
    int res;
    float avg;
    
    cout << "Enter total numbers: ";
    cin >> length;
    for (i = 0; i < length; i++) {
        cout << "Enter Value: ";
        cin >> nums[i];
    }
    
    res = findSum(nums, length);
    cout << res << endl;
    avg = findMean(nums, length);
    cout << avg << endl;
    res = findProduct(nums, length);
    cout << res << endl;
    res = findSD(nums, length);
    cout << res << endl;

}


int findSum(int *a, int l) {
    int i;
    int sum = 0;
    for (i = 0; i < l; i++) {
        sum = sum + a[i];
    }
    return sum;
}

float findMean(int *a, int l) {
    int sum;
    float avg;
    sum = findSum(a, l);
    avg = ((float)sum) / l;
    return avg;
}

float findSD(int *a, int l) {
    float mean;
    mean = findMean(a, l);
    int i, res;
    float sumSD = 0;
    
    for (i = 0; i < l; i++) {
        sumSD = sumSD + pow(a[i] - mean ,2);
    }
    res = sqrt(sumSD / 10);
    return res;
}

int findProduct(int *a, int l) {
    int i;
    int sum = 1;
    for (i = 0; i < l; i++) {
        sum = sum * a[i];
    }
    return sum;
}



