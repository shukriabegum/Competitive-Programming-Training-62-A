#include<bits\stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<v.size();i++){
        cin >> v[i] ;
    }

    vector<long long  >pref(n);
    pref[0] = v[0];

    for(int i = 1 ; i<v.size(); i++){
        pref[i] = pref[i-1]+v[i];
    }

    cout << "Prefix Sum Vector: " <<"\n";
    for(int i =0 ;i<v.size();i++){
        cout<<pref[i] << " ";
    }
    cout<<"\n";
    return 0;
}