#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int a[n + 1];    // make array 1-based

    cout << "Enter " << n << " sorted elements: ";
    for (int i = 1; i <= n; i++) {   // input from 1 to n
        cin >> a[i];
    }

    int target;
    cout << "Enter target sum: ";
    cin >> target;

    int i = 1;
    int j = n;     // this is now CORRECT

    while (i < j) {
        int sum = a[i] + a[j];

        if (sum == target) {
            cout << "Pair found: " << a[i] << " + " << a[j] << endl;
            cout << "Indices: " << i << " and " << j << endl;
            return 0;
        }
        else if (sum < target) {
            i++;
        }
        else {
            j--;
        }
    }

    cout << "No pair found";
    return 0;
}
