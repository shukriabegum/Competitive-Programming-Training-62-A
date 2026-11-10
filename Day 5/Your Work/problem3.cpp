#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m), merged;
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];

    int i = 0, j = 0;

    // Traverse both arrays
    while(i < n && j < m) {
        if(a[i] <= b[j]) {
            merged.push_back(a[i]);
            i++;
        } else {
            merged.push_back(b[j]);
            j++;
        }
    }

    // Add remaining elements of array a (if any)
    while(i < n) {
        merged.push_back(a[i]);
        i++;
    }

    // Add remaining elements of array b (if any)
    while(j < m) {
        merged.push_back(b[j]);
        j++;
    }

    cout << "Merged Array: ";
    for(int x : merged) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
