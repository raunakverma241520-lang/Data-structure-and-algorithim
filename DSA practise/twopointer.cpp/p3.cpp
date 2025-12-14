#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> a(n);

    cout << "Enter " << n << " sorted elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if (n == 0) {
        cout << "Unique count = 0";
        return 0;
    }

    int officer = 0;   // slow pointer
    int cm = 1;        // fast pointer
    int res = 1;       // count of unique elements

    while (cm < n) {
        if (a[cm] == a[cm - 1]) {
            cm++;
            continue;
        }
        a[officer + 1] = a[cm];
        officer++;
        res++;
        cm++;
    }

    cout << "Unique count = " << res << endl;

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < res; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
