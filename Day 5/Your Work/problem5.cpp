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
    int n,k;
    cin >> n>> k;

    vector<int > v(n);
    for(int i = 0 ;i<n;i++){
        cin>> v[i];
    }

    if(k>n){
        cout<<"Invalid window size.\n";
    }

    ll current_sum  = 0 ,max_sum = 0 ;

    for (int i = 0 ;i<k ;i++){
        current_sum +=v[i];
    }
   max_sum = current_sum;

   // slide the window from index k to n-1 

   for ( int i = k ; i<n;i++){
    current_sum +=v[i] - v[i-k];
    max_sum = max(max_sum,current_sum);
   }

   cout << "Maximum sum of subarray of size " <<k << " is "<<max_sum<<endl;
    return 0;
}