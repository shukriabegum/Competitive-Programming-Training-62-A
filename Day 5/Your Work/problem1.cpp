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
    
    int n,x;
    cin >> n>> x;

   vector<int>v(n);
    for(int i = 0 ;i<n;i++){
        cin>>v[i];
    }
    //sort(v.begin(),v.end());
    int i = 0 ,j=n-1;
    bool isfound = false ;

    while(i < j){
        ll current_sum = v[i]+v[j];
          
        if(current_sum<x){
            i++ ;
        }
        else if ( current_sum > x){
            j--;
        }
        else{
            cout<<"Pair found: "<<v[i] <<" and "<<v[j]<<"\n";
            isfound = true ;
            break;
        }

    }

    if(isfound == false){
        cout<<"No pair exists that sums to "<<x<<endl;
        
    }
    return 0;
}