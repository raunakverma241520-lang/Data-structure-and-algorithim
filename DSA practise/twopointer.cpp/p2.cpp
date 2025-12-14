#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> a = {1,1,2,2,3,3,3,4}; // sample input, modify as needed

    int n = a.size();     // size of array
    int officer = 0;      // slow pointer
    int cm = 1;           // fast pointer
    int res = 1;          // result count (unique elements)

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
    return 0;
}
