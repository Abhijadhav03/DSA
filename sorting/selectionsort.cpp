#include<bits/stdc++.h>

using namespace std;
// void selection_sort(int arr[], int n) {
//   // selection sort
//   for (int i = 0; i < n - 1; i++) {
//     int mini = i;
//     for (int j = i + 1; j < n; j++) {
//       if (arr[j] < arr[mini]) {
//         mini = j;
//       }
//     }
//     int temp = arr[mini];
//     arr[mini] = arr[i];
//     arr[i] = temp;
//   }

  void bubble_sort(int arr[], int n) {
    for (int i = n - 1; i > 0; i--) {
        int didswap =0;
        for (int j = 0; j < i; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                didswap=1;
            }
        }
        if(didswap == 0){
    break;
}
cout<<"runs";
    }
}


//   cout << "After selection sort: " << "\n";
//   for (int i = 0; i < n; i++) {
//     cout << arr[i] << " ";
//   }
//   cout << "\n";

// }
//int main() {
//   int arr[] = {13,45,22,50,20,9};
//   int n = sizeof(arr) / sizeof(arr[0]);
//    cout << "Before selection sort: " << "\n";
//    for (int i = 0; i < n; i++) {
//     cout << arr[i] << " ";
//   }
//   cout << "\n";
//   selection_sort(arr, n);
//   return 0;
// }

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    bubble_sort(arr, n);
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}