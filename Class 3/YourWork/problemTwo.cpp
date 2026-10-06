#include<bits\stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin>> n >> q;
    vector < long long > v(n+1,0);
    vector < long long > pref(n+1,0);

    for (int i =1;i<=n;i++){
        cin>> v[i];
        pref[i] = pref[i-1]+v[i];

    }


    while(q--){
        int l, r;
        cin >> l >> r;
        long long calculate_sum = pref[r] -pref[l-1];
        cout << "Sum from "<<l <<" to "<<r << " = "<<calculate_sum<<"\n";

       
    }

     return 0;
}