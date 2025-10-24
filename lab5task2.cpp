#include <iostream>
using namespace std;
int main() {
    int arr[] = {10, 25, 7, 42, 18};
    int n = sizeof(arr) / sizeof(arr[0]); 
    int maxVal = arr[0];
    int minVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal)
            maxVal = arr[i];
        if (arr[i] < minVal)
            minVal = arr[i];
    }
    cout << "Maximum value: " << maxVal << endl;
    cout << "Minimum value: " << minVal << endl;
    return 0;
}

