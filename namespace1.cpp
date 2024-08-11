#include <iostream>
using namespace std;

template <typename T, int max>
T arrMin(T arr[], int n) {
    T m = max;
    for (int i = 0; i < n; i++)
        if (arr[i] < m)
            m = arr[i];
    return m;
}

int main() {
    int arr1[] = {10, 20, 15, 12, 8, 9, 2}; 
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    char arr2[] = {12, 2, 3, 10, 4}; 
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    // Second template parameter to arrMin must be a constant
    cout << arrMin<int, 1>(arr1, n1) << endl;
    cout << arrMin<char, 256>(arr2, n2);
    return 0;
}
