#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()


int main() {
    optimize();
    
    int n ;
    cin >> n;
    vector<int > v(n);

    for(int i = 0 ;i<n;i++){
        cin >> v[i];
    }

    if(n==0 ) return 0 ;

    int slow = 0 ;

    for( int fast = 1 ;fast<n;fast++){
        if(v[fast] != v[slow]){
            slow++ ;
            v[slow] = v[fast];
        }
    }
    int unique_count = slow + 1 ;

    cout<<"Number of unique elements: "<<unique_count<<endl;
    cout << "Array after removing duplicates: ";
    for(int i = 0 ;i<unique_count;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}