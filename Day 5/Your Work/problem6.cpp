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
    int n;
    ll k;
    cin >> n>> k;

    vector<ll > v(n);
    for(int i = 0 ;i<n;i++){
        cin>> v[i];
    }

   

    ll left= 0 , current_sum  = 0 ,min_len = 2e18;

    for (int i = 0 ;i<n ;i++){
        current_sum +=v[i];
        while(current_sum >=k){
            min_len = min(min_len,i-left+1);
            current_sum -=v[left];
            left++;
        }
    }
   

  

   if(min_len == 2e18){
    cout<<"No subarray found with sum >= "<<k<<endl;

   }
   else {
    cout<<"Minimum subarray length with sum >= "<<k<< " is "<<min_len<<endl;

   }
  
    return 0;
}
