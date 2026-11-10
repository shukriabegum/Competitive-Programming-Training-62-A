#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m), merged;
    for(int i = 0; i < n; i++){
        cin >> a[i];}
    for(int i = 0; i < m; i++) {
        cin >> b[i];
    }
    int i = 0, j = 0;

    // Traverse both arrays
    while(i < n && j < m) {
        if(a[i] <= b[j]) {
            merged.pb(a[i]);
            i++;
        } else {
            merged.pb(b[j]);
            j++;
        }
    }

    while(i < n) {
        merged.pb(a[i]);
        i++;
    }

    while(j < m) {
        merged.pb(b[j]);
        j++;
    }

    cout << "Merged Array: ";
    for(int x : merged) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
