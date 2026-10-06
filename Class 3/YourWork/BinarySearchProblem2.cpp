#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin >> n >> x;
    vector< int>v(n);
     for(int i = 0;i<v.size();i++){
        cin>> v[i];
    }

    sort(v.begin(),v.end());

vector<int>:: iterator it1 = lower_bound(v.begin(),v.end(),x);
    vector<int>:: iterator it2 = upper_bound(v.begin(),v.end(),x);

    if(it1 !=v.end() && *it1 == x){
        int first_pos = it1 - v.begin();
        int second_pos = it2 - v.begin() -1;
        int feq = it2 - it1;

        cout<<"First occurance at index: " <<first_pos <<endl;
        cout<<"Second occurance at index: " <<second_pos <<endl;
        cout<<"Total frequency of : " <<x <<" = " <<endl;

        
        

        
    }
    else{
        cout<<"Element " << x <<" not present."<<endl;
    }
    return 0;
}
