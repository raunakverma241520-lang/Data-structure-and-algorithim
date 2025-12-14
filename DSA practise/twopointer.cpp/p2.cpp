#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> a = {1,1,2,2,3,3,3,4}; 

    int n = a.size();    
    int officer = 0;     
    int cm = 1;           
    int res = 1;          

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

