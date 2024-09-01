#include <iostream>
#include <algorithm>  
using namespace std;

void rotatetoleft(int arr[], int n, int k) {
    k = k % n;  
    reverse(arr, arr + k);     
    reverse(arr + k, arr + n);  
    reverse(arr, arr + n);      
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    rotatetoleft(arr, n, k);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
