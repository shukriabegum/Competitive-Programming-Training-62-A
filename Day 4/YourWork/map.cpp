#include <bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(0);
 cin.tie(0);cout.tie(0);

 int n;
 cin >> n;

 map<string,int>mp;


 for(int i =0 ;i<n;i++){
    string word;
    cin>>word;
    mp[word]++; 
 }
 
 cout<<"word Frequency: "<<"\n";
 
 for(auto it = mp.begin();it != mp.end();it++){
     cout<<(*it).first<<" : "<<(*it).second<<"\n";
 }
 string query;
 cin >> query ;
 cout<< "Frequency of " << query <<" is: "<<mp[query]<<"\n";
 
}
